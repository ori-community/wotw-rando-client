#include <utils/operations.h>

bool operator==(const app::Vector3& c1, const app::Vector3& c2) {
    return (
            c1.x == c2.x &&
            c1.y == c2.y &&
            c1.z == c2.z
    );
}

bool operator!=(const app::Vector3& c1, const app::Vector3& c2) {
    return !(c1 == c2);
}

inline app::Vector3 operator+(const app::Vector3& a, const app::Vector3& b) {
    return app::Vector3 {
        a.x + b.x,
        a.y + b.y,
        a.z + b.z,
    };
}

inline app::Vector3 operator-(const app::Vector3& a, const app::Vector3& b) {
    return app::Vector3 {
        a.x - b.x,
        a.y - b.y,
        a.z - b.z,
    };
}

bool operator==(const app::Color& c1, const app::Color& c2) {
    return (
            c1.r == c2.r &&
            c1.g == c2.g &&
            c1.b == c2.b &&
            c1.a == c2.a
    );
}

bool operator!=(const app::Color& c1, const app::Color& c2) {
    return !(c1 == c2);
}

bool operator==(const app::MoonGuid& a, const app::MoonGuid& b) {
    return (
            a.fields.A == b.fields.A &&
            a.fields.B == b.fields.B &&
            a.fields.C == b.fields.C &&
            a.fields.D == b.fields.D
    );
}

bool operator!=(const app::MoonGuid& a, const app::MoonGuid& b) {
    return !(a == b);
}