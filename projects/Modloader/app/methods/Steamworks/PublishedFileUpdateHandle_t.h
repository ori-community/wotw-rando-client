#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Steamworks::PublishedFileUpdateHandle_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::PublishedFileUpdateHandle_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String*, ToString, (app::PublishedFileUpdateHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00207150, bool, Equals_1, (app::PublishedFileUpdateHandle_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::PublishedFileUpdateHandle_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::PublishedFileUpdateHandle_t x, app::PublishedFileUpdateHandle_t y))
    IL2CPP_REGISTER_METHOD(0x027E1B80, bool, op_Inequality, (app::PublishedFileUpdateHandle_t x, app::PublishedFileUpdateHandle_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::PublishedFileUpdateHandle_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::PublishedFileUpdateHandle_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::PublishedFileUpdateHandle_t__Boxed * this_ptr, app::PublishedFileUpdateHandle_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::PublishedFileUpdateHandle_t__Boxed * this_ptr, app::PublishedFileUpdateHandle_t other))
    IL2CPP_REGISTER_METHOD(0x027E1C30, void, cctor, ())
    inline bool operator==(app::PublishedFileUpdateHandle_t x, app::PublishedFileUpdateHandle_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::PublishedFileUpdateHandle_t x, app::PublishedFileUpdateHandle_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::PublishedFileUpdateHandle_t
