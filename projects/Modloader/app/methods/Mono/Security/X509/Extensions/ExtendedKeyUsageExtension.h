#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ExtendedKeyUsageExtension.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Extension_2.h>

namespace app::classes::Mono::Security::X509::Extensions::ExtendedKeyUsageExtension {
    IL2CPP_REGISTER_METHOD(0x0291D710, void, ctor, app::ExtendedKeyUsageExtension* this_ptr, app::X509Extension_2* extension)
    IL2CPP_REGISTER_METHOD(0x0291E920, void, Decode, app::ExtendedKeyUsageExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291EC10, void, Encode, app::ExtendedKeyUsageExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::ArrayList*, get_KeyPurpose, app::ExtendedKeyUsageExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291F000, app::String*, get_Name, app::ExtendedKeyUsageExtension* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291F080, app::String*, ToString, app::ExtendedKeyUsageExtension* this_ptr)
} // namespace app::classes::Mono::Security::X509::Extensions::ExtendedKeyUsageExtension
