#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Globalization::SortVersion {
    IL2CPP_REGISTER_METHOD(0x01DEC630, bool, Equals_1, (app::SortVersion * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01DEC700, bool, Equals_2, (app::SortVersion * this_ptr, app::SortVersion* other))
    IL2CPP_REGISTER_METHOD(0x01DEC800, int32_t, GetHashCode, (app::SortVersion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DEC830, bool, op_Equality, (app::SortVersion * left, app::SortVersion* right))
    IL2CPP_REGISTER_METHOD(0x01DEC850, bool, op_Inequality, (app::SortVersion * left, app::SortVersion* right))
    inline bool operator==(app::SortVersion& left, app::SortVersion& right) {
        return op_Equality(&left, &right);
    }
    inline bool operator!=(app::SortVersion& left, app::SortVersion& right) {
        return op_Inequality(&left, &right);
    }
} // namespace app::classes::System::Globalization::SortVersion
