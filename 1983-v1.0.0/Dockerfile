FROM gcc:11.2.0
LABEL maintainer="SAMATE, NIST"
RUN apt-get update && apt-get install -y --no-install-recommends make curl
RUN mkdir -p /tmp/mysqlpp
WORKDIR /tmp/mysqlpp
RUN curl "https://tangentsoft.com/mysqlpp/releases/mysql++-2.3.2.tar.gz" | tar xvz --strip 1 && \
    ./configure --prefix /usr --with-mysql-lib=/usr/lib/x86_64-linux-gnu && \
    sed -i '/<string>/i #include <cstring>' ./lib/const_string.h && \
    make install
ENV CPATH=/usr/include/mysql++
WORKDIR /sard
RUN rm -rf /tmp/mysqlpp
COPY . .
