#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::FriendsGroupID_t {
    IL2CPP_REGISTER_METHOD(0x00113CD0, void, ctor, (app::FriendsGroupID_t__Boxed * this_ptr, int16_t value))
    IL2CPP_REGISTER_METHOD(0x00130280, app::String*, ToString, (app::FriendsGroupID_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001302B0, bool, Equals_1, (app::FriendsGroupID_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001303B0, int32_t, GetHashCode, (app::FriendsGroupID_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015FADA0, bool, op_Equality, (app::FriendsGroupID_t x, app::FriendsGroupID_t y))
    IL2CPP_REGISTER_METHOD(0x015FADB0, bool, op_Inequality, (app::FriendsGroupID_t x, app::FriendsGroupID_t y))
    IL2CPP_REGISTER_METHOD(0x015FAE60, app::FriendsGroupID_t, op_Explicit_1, (int16_t value))
    IL2CPP_REGISTER_METHOD(0x015FAE60, int16_t, op_Explicit_2, (app::FriendsGroupID_t that))
    IL2CPP_REGISTER_METHOD(0x001303C0, bool, Equals_2, (app::FriendsGroupID_t__Boxed * this_ptr, app::FriendsGroupID_t other))
    IL2CPP_REGISTER_METHOD(0x001303D0, int32_t, CompareTo, (app::FriendsGroupID_t__Boxed * this_ptr, app::FriendsGroupID_t other))
    IL2CPP_REGISTER_METHOD(0x015FAE70, void, cctor, ())
    inline bool operator==(app::FriendsGroupID_t x, app::FriendsGroupID_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::FriendsGroupID_t x, app::FriendsGroupID_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::FriendsGroupID_t
