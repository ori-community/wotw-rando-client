//
// Created by Timo on 29/07/2022.
//

#include "mood_guid.h"

namespace utils {
    MoodGuid::MoodGuid(int a, int b, int c, int d) :
            A(a), B(b), C(c), D(d) {}
}

bool operator==(const utils::MoodGuid& a, const app::MoonGuid& b) {
    return
            a.A == b.fields.A &&
            a.B == b.fields.B &&
            a.C == b.fields.C &&
            a.D == b.fields.D;
}

bool operator!=(const utils::MoodGuid& a, const app::MoonGuid& b) {
    return !(a == b);
}