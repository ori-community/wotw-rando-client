#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UGCUpdateHandle_t__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UGCUpdateHandle_t.h>

namespace app::classes::Steamworks::UGCUpdateHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::UGCUpdateHandle_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String*, ToString, (app::UGCUpdateHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00200BD0, bool, Equals_1, (app::UGCUpdateHandle_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::UGCUpdateHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::UGCUpdateHandle_t x, app::UGCUpdateHandle_t y))
    IL2CPP_REGISTER_METHOD(0x027A6B90, bool, op_Inequality, (app::UGCUpdateHandle_t x, app::UGCUpdateHandle_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::UGCUpdateHandle_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::UGCUpdateHandle_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::UGCUpdateHandle_t__Boxed * this_ptr, app::UGCUpdateHandle_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::UGCUpdateHandle_t__Boxed * this_ptr, app::UGCUpdateHandle_t other))
    IL2CPP_REGISTER_METHOD(0x027A6C40, void, cctor, ())
    inline bool operator==(app::UGCUpdateHandle_t x, app::UGCUpdateHandle_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::UGCUpdateHandle_t x, app::UGCUpdateHandle_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::UGCUpdateHandle_t
