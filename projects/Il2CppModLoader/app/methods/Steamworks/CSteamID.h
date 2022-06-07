#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::CSteamID {
    IL2CPP_REGISTER_METHOD(0x0012F2F0, void, ctor_1, (app::CSteamID__Boxed * this_ptr, app::AccountID_t un_account_i_d, app::EUniverse__Enum e_universe, app::EAccountType__Enum e_account_type))
    IL2CPP_REGISTER_METHOD(0x0012F300, void, ctor_2, (app::CSteamID__Boxed * this_ptr, app::AccountID_t un_account_i_d, uint32_t un_account_instance, app::EUniverse__Enum e_universe, app::EAccountType__Enum e_account_type))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor_3, (app::CSteamID__Boxed * this_ptr, uint64_t ul_steam_i_d))
    IL2CPP_REGISTER_METHOD(0x0012F330, void, Set, (app::CSteamID__Boxed * this_ptr, app::AccountID_t un_account_i_d, app::EUniverse__Enum e_universe, app::EAccountType__Enum e_account_type))
    IL2CPP_REGISTER_METHOD(0x0012F300, void, InstancedSet, (app::CSteamID__Boxed * this_ptr, app::AccountID_t un_account_i_d, uint32_t un_instance, app::EUniverse__Enum e_universe, app::EAccountType__Enum e_account_type))
    IL2CPP_REGISTER_METHOD(0x00120B90, void, Clear, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F340, void, CreateBlankAnonLogon, (app::CSteamID__Boxed * this_ptr, app::EUniverse__Enum e_universe))
    IL2CPP_REGISTER_METHOD(0x0012F370, void, CreateBlankAnonUserLogon, (app::CSteamID__Boxed * this_ptr, app::EUniverse__Enum e_universe))
    IL2CPP_REGISTER_METHOD(0x0012F3A0, bool, BBlankAnonAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F3D0, bool, BGameServerAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F3F0, bool, BPersistentGameServerAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F410, bool, BAnonGameServerAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F420, bool, BContentServerAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F440, bool, BClanAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F460, bool, BChatAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F470, bool, IsLobby, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F4A0, bool, BIndividualAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F4C0, bool, BAnonAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F4E0, bool, BAnonUserAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F500, bool, BConsoleUserAccount, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F520, void, SetAccountID, (app::CSteamID__Boxed * this_ptr, app::AccountID_t other))
    IL2CPP_REGISTER_METHOD(0x0012F540, void, SetAccountInstance, (app::CSteamID__Boxed * this_ptr, uint32_t other))
    IL2CPP_REGISTER_METHOD(0x0012F560, void, SetEAccountType, (app::CSteamID__Boxed * this_ptr, app::EAccountType__Enum other))
    IL2CPP_REGISTER_METHOD(0x0012F580, void, SetEUniverse, (app::CSteamID__Boxed * this_ptr, app::EUniverse__Enum other))
    IL2CPP_REGISTER_METHOD(0x0012F5A0, void, ClearIndividualInstance, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F5D0, bool, HasNoIndividualInstance, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010E170, app::AccountID_t, GetAccountID, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F600, uint32_t, GetUnAccountInstance, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F610, app::EAccountType__Enum, GetEAccountType, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F620, app::EUniverse__Enum, GetEUniverse, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F630, bool, IsValid, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F1B0, app::String *, ToString, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F6A0, bool, Equals_1, (app::CSteamID__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0012F2B0, int32_t, GetHashCode, (app::CSteamID__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, op_Equality, (app::CSteamID x, app::CSteamID y))
    IL2CPP_REGISTER_METHOD(0x015FA5E0, bool, op_Inequality, (app::CSteamID x, app::CSteamID y))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::CSteamID, op_Explicit_1, (uint64_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, uint64_t, op_Explicit_2, (app::CSteamID that))
    IL2CPP_REGISTER_METHOD(0x0012F2C0, bool, Equals_2, (app::CSteamID__Boxed * this_ptr, app::CSteamID other))
    IL2CPP_REGISTER_METHOD(0x0012F2D0, int32_t, CompareTo, (app::CSteamID__Boxed * this_ptr, app::CSteamID other))
    IL2CPP_REGISTER_METHOD(0x015FA690, void, cctor, ())
    inline bool operator == (app::CSteamID x, app::CSteamID y) {
        return op_Equality(x, y);
    }
    inline bool operator != (app::CSteamID x, app::CSteamID y) {
        return op_Inequality(x, y);
    }
}
