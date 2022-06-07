#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::Unity::UnityTls {
    IL2CPP_REGISTER_METHOD(0x02186CA0, void *, GetUnityTlsInterface, ())
    IL2CPP_REGISTER_METHOD(0x02186CB0, bool, get_IsSupported, ())
    IL2CPP_REGISTER_METHOD(0x02186D50, app::UnityTls_unitytls_interface_struct *, get_NativeInterface, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
