#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::PublishedFileId_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::PublishedFileId_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::PublishedFileId_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00207140, bool, Equals_1, (app::PublishedFileId_t__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::PublishedFileId_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::PublishedFileId_t x, app::PublishedFileId_t y))
    IL2CPP_REGISTER_METHOD(0x027E1A50, bool, op_Inequality, (app::PublishedFileId_t x, app::PublishedFileId_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::PublishedFileId_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::PublishedFileId_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::PublishedFileId_t__Boxed * this_ptr, app::PublishedFileId_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::PublishedFileId_t__Boxed * this_ptr, app::PublishedFileId_t other))
    IL2CPP_REGISTER_METHOD(0x027E1B00, void, cctor, ())
    inline bool operator == (app::PublishedFileId_t x, app::PublishedFileId_t y) {
        return op_Equality(x, y);
    }
    inline bool operator != (app::PublishedFileId_t x, app::PublishedFileId_t y) {
        return op_Inequality(x, y);
    }
}
