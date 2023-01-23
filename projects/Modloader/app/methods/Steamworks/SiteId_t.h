#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SiteId_t__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SiteId_t.h>

namespace app::classes::Steamworks::SiteId_t {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::SiteId_t__Boxed * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String*, ToString, (app::SiteId_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0020B1E0, bool, Equals_1, (app::SiteId_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::SiteId_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::SiteId_t x, app::SiteId_t y))
    IL2CPP_REGISTER_METHOD(0x027E1DD0, bool, op_Inequality, (app::SiteId_t x, app::SiteId_t y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::SiteId_t, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::SiteId_t that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::SiteId_t__Boxed * this_ptr, app::SiteId_t other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::SiteId_t__Boxed * this_ptr, app::SiteId_t other))
    IL2CPP_REGISTER_METHOD(0x027E1E80, void, cctor, ())
    inline bool operator==(app::SiteId_t x, app::SiteId_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::SiteId_t x, app::SiteId_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::SiteId_t
