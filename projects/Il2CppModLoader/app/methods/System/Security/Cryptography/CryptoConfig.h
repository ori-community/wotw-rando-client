#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::CryptoConfig {
    IL2CPP_REGISTER_METHOD(0x020C91F0, app::Byte__Array *, EncodeOID, (app::String * str))
    IL2CPP_REGISTER_METHODINFO(0x0477C5B0, CryptoConfig_EncodeOID__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C9690, app::Byte__Array *, EncodeLongNumber, (int64_t x))
    IL2CPP_REGISTER_METHODINFO(0x04766D58, CryptoConfig_EncodeLongNumber__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowOnlyFipsAlgorithms, ())
    IL2CPP_REGISTER_METHOD(0x020C9840, void, AddAlgorithm, (app::Type * algorithm, app::String__Array * names))
    IL2CPP_REGISTER_METHODINFO(0x04726578, CryptoConfig_AddAlgorithm__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C9890, void, AddOID, (app::String * oid, app::String__Array * names))
    IL2CPP_REGISTER_METHODINFO(0x04736F70, CryptoConfig_AddOID__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C98E0, app::Object *, CreateFromName_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x020C98F0, app::Object *, CreateFromName_2, (app::String * name, app::Object__Array * args))
    IL2CPP_REGISTER_METHODINFO(0x0470EDC0, CryptoConfig_CreateFromName_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020CC640, app::String *, MapNameToOID_1, (app::String * name, app::Object * arg))
    IL2CPP_REGISTER_METHOD(0x020CC650, app::String *, MapNameToOID_2, (app::String * name))
    IL2CPP_REGISTER_METHODINFO(0x04730F38, CryptoConfig_MapNameToOID_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CryptoConfig * this_ptr))
}
