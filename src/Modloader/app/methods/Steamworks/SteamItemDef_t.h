#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SteamItemDef_t.h>
#include <Modloader/app/structs/SteamItemDef_t__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamItemDef_t {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, app::SteamItemDef_t__Boxed* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x001311C0, app::String*, ToString, app::SteamItemDef_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001FFE70, bool, Equals_1, app::SteamItemDef_t__Boxed* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, app::SteamItemDef_t__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, app::SteamItemDef_t x, app::SteamItemDef_t y)
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, op_Inequality, app::SteamItemDef_t x, app::SteamItemDef_t y)
    IL2CPP_REGISTER_METHOD(0x006CE970, app::SteamItemDef_t, op_Explicit_1, int32_t value)
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, op_Explicit_2, app::SteamItemDef_t that)
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, app::SteamItemDef_t__Boxed* this_ptr, app::SteamItemDef_t other)
    IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, app::SteamItemDef_t__Boxed* this_ptr, app::SteamItemDef_t other)
    inline bool operator==(app::SteamItemDef_t x, app::SteamItemDef_t y) { return op_Equality(x, y); }
    inline bool operator!=(app::SteamItemDef_t x, app::SteamItemDef_t y) { return op_Inequality(x, y); }
} // namespace app::classes::Steamworks::SteamItemDef_t
