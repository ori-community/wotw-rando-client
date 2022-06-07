#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::CspKeyContainerInfo {
    IL2CPP_REGISTER_METHOD(0x020D0390, void, ctor, (app::CspKeyContainerInfo * this_ptr, app::CspParameters * parameters))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Accessible, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::CryptoKeySecurity *, get_CryptoKeySecurity, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Exportable, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HardwareDevice, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00571730, app::String *, get_KeyContainerName, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E83750, app::KeyNumber__Enum, get_KeyNumber, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_MachineKeyStore, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_Protected, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::String *, get_ProviderName, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D03A0, int32_t, get_ProviderType, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_RandomlyGenerated, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_Removable, (app::CspKeyContainerInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D03C0, app::String *, get_UniqueKeyContainerName, (app::CspKeyContainerInfo * this_ptr))
}
