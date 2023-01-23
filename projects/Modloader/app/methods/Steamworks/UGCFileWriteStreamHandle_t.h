#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UGCFileWriteStreamHandle_t__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UGCFileWriteStreamHandle_t.h>

namespace app::classes::Steamworks::UGCFileWriteStreamHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String*, ToString, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002008D0, bool, Equals_1, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::UGCFileWriteStreamHandle_t x, app::UGCFileWriteStreamHandle_t y))
    IL2CPP_REGISTER_METHOD(0x027A6800, bool, op_Inequality, (app::UGCFileWriteStreamHandle_t x, app::UGCFileWriteStreamHandle_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::UGCFileWriteStreamHandle_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::UGCFileWriteStreamHandle_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr, app::UGCFileWriteStreamHandle_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::UGCFileWriteStreamHandle_t__Boxed * this_ptr, app::UGCFileWriteStreamHandle_t other))
    IL2CPP_REGISTER_METHOD(0x027A68B0, void, cctor, ())
    inline bool operator==(app::UGCFileWriteStreamHandle_t x, app::UGCFileWriteStreamHandle_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::UGCFileWriteStreamHandle_t x, app::UGCFileWriteStreamHandle_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::UGCFileWriteStreamHandle_t
