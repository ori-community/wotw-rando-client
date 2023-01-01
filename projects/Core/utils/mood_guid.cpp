#include "mood_guid.h"
#include "misc.h"
#include <random>

namespace utils {
    std::random_device random_device;
    std::mt19937 rng(random_device());

    MoodGuid::MoodGuid(int a, int b, int c, int d) :
            A(a), B(b), C(c), D(d) {}

    MoodGuid::MoodGuid(app::MoonGuid* moon_guid) :
            A(moon_guid->fields.A), B(moon_guid->fields.B), C(moon_guid->fields.C), D(moon_guid->fields.D) {}

    app::MoonGuid* MoodGuid::to_moon_guid() {
        return moon_guid(A, B, C, D);
    }
    MoodGuid::MoodGuid() {
        this->A = rng();
        this->B = rng();
        this->C = rng();
        this->D = rng();
    }

    bool operator==(const MoodGuid& a, const app::MoonGuid& b) {
        return a.A == b.fields.A &&
                a.B == b.fields.B &&
                a.C == b.fields.C &&
                a.D == b.fields.D;
    }

    bool operator==(const MoodGuid& a, const MoodGuid& b) {
        return a.A == b.A &&
                a.B == b.B &&
                a.C == b.C &&
                a.D == b.D;
    }

    bool operator!=(const MoodGuid& a, const app::MoonGuid& b) {
        return !(a == b);
    }

    bool operator!=(const MoodGuid& a, const MoodGuid& b) {
        return !(a == b);
    }
} // namespace utils
