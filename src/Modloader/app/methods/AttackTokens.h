#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttackTokenPriority__Enum.h>
#include <Modloader/app/structs/AttackTokens_Request.h>
#include <Modloader/app/structs/IAttackTokenHolder.h>

namespace app::classes::AttackTokens {
    IL2CPP_REGISTER_METHOD(0x00852AE0, bool, TryClaimToken, app::AttackTokens_Request request)
    IL2CPP_REGISTER_METHOD(0x008535E0, bool, HasToken, app::IAttackTokenHolder* holder)
    IL2CPP_REGISTER_METHOD(0x00853720, void, ReleaseToken, app::IAttackTokenHolder* holder)
    IL2CPP_REGISTER_METHOD(0x00853A00, int32_t, TokensAvaible, app::AttackTokenPriority__Enum priority)
    IL2CPP_REGISTER_METHOD(0x00853C30, void, ClaimAttackToken, app::AttackTokens_Request request)
    IL2CPP_REGISTER_METHOD(0x00853DE0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00854030, void, InitializeStatics, )
    IL2CPP_REGISTER_METHOD(0x008540F0, void, cctor, )
} // namespace app::classes::AttackTokens
