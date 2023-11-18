#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SteamInventoryResult_t__Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SteamInventoryResult_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamInventoryResult_t {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::SteamInventoryResult_t__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001311C0, app::String*, ToString, (app::SteamInventoryResult_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FFC80, bool, Equals_1, (app::SteamInventoryResult_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::SteamInventoryResult_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::SteamInventoryResult_t x, app::SteamInventoryResult_t y))
    IL2CPP_REGISTER_METHOD(0x02786310, bool, op_Inequality, (app::SteamInventoryResult_t x, app::SteamInventoryResult_t y))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::SteamInventoryResult_t, op_Explicit_1, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, op_Explicit_2, (app::SteamInventoryResult_t that))
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::SteamInventoryResult_t__Boxed * this_ptr, app::SteamInventoryResult_t other))
    IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (app::SteamInventoryResult_t__Boxed * this_ptr, app::SteamInventoryResult_t other))
    IL2CPP_REGISTER_METHOD(0x027863B0, void, cctor, ())
    inline bool operator==(app::SteamInventoryResult_t x, app::SteamInventoryResult_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::SteamInventoryResult_t x, app::SteamInventoryResult_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::SteamInventoryResult_t
