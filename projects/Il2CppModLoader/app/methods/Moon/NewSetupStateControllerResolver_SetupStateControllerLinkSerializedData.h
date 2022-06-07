#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData {
    IL2CPP_REGISTER_METHOD(0x01B64A30, void, ctor, (app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData * this_ptr, int32_t state_guid, int32_t modifier_guid, app::NewSetupStateController * controller, app::MemberInfo_1 * target_member_info))
    IL2CPP_REGISTER_METHODINFO(0x04769028, NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01B64E40, app::SetupStateModifier *, GetModifierObject, (app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B64E80, app::SetupStateModifierData *, GetModifierDataObject, (app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B64ED0, app::Type *, GetModifierType, (app::NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData * this_ptr))
}
