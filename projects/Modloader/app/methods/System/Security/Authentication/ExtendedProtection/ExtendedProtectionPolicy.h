#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExtendedProtectionPolicy.h>
#include <Modloader/app/structs/ChannelBinding.h>
#include <Modloader/app/structs/PolicyEnforcement__Enum.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::ExtendedProtectionPolicy * this_ptr, app::PolicyEnforcement__Enum policy_enforcement))
    IL2CPP_REGISTER_METHOD(0x021BC6F0, void, ctor_2, (app::ExtendedProtectionPolicy * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x021BC740, app::ChannelBinding*, get_CustomChannelBinding, (app::ExtendedProtectionPolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021BC790, app::PolicyEnforcement__Enum, get_PolicyEnforcement, (app::ExtendedProtectionPolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E16610, app::String*, ToString, (app::ExtendedProtectionPolicy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021BC7E0, void, ISerializable_GetObjectData, (app::ExtendedProtectionPolicy * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy
