FROM rust:alpine as build-seedgen

COPY . /app
WORKDIR /app

RUN apk --no-cache add musl-dev && \
    cd projects/SeedGenCli && \
    cargo build --release --target-dir /app/build/output


FROM alpine

WORKDIR /app

COPY --from=build-seedgen /app/build/output/release/seedgen /app/seedgen
COPY --from=build-seedgen /app/projects/SeedGenCli/headers /app/headers
COPY --from=build-seedgen /app/projects/SeedGenCli/presets /app/presets
COPY --from=build-seedgen /app/projects/SeedGenCli/areas.wotw /app/areas.wotw
COPY --from=build-seedgen /app/projects/SeedGenCli/loc_data.csv /app/loc_data.csv
COPY --from=build-seedgen /app/projects/SeedGenCli/state_data.csv /app/state_data.csv
