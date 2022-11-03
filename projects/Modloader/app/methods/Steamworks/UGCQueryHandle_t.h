#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Steamworks::UGCQueryHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::UGCQueryHandle_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String*, ToString, (app::UGCQueryHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00200AD0, bool, Equals_1, (app::UGCQueryHandle_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::UGCQueryHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::UGCQueryHandle_t x, app::UGCQueryHandle_t y))
    IL2CPP_REGISTER_METHOD(0x027A6A60, bool, op_Inequality, (app::UGCQueryHandle_t x, app::UGCQueryHandle_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::UGCQueryHandle_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::UGCQueryHandle_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::UGCQueryHandle_t__Boxed * this_ptr, app::UGCQueryHandle_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::UGCQueryHandle_t__Boxed * this_ptr, app::UGCQueryHandle_t other))
    IL2CPP_REGISTER_METHOD(0x027A6B10, void, cctor, ())
    inline bool operator==(app::UGCQueryHandle_t x, app::UGCQueryHandle_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::UGCQueryHandle_t x, app::UGCQueryHandle_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::UGCQueryHandle_t
