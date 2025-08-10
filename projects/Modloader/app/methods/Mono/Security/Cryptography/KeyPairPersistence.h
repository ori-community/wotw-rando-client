#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CspParameters.h>
#include <Modloader/app/structs/KeyPairPersistence.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::Cryptography::KeyPairPersistence {
    IL2CPP_REGISTER_METHOD(0x025CC460, void, ctor_1, app::KeyPairPersistence* this_ptr, app::CspParameters* parameters)
    IL2CPP_REGISTER_METHOD(0x025CC530, void, ctor_2, app::KeyPairPersistence* this_ptr, app::CspParameters* parameters, app::String* key_pair)
    IL2CPP_REGISTER_METHOD(0x025CC610, app::String*, get_Filename, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_KeyValue, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CC7F0, void, set_KeyValue, app::KeyPairPersistence* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x025CC800, app::CspParameters*, get_Parameters, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CC810, bool, Load, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CC990, void, Save, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CCC80, void, Remove, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CCCA0, app::String*, get_UserPath, )
    IL2CPP_REGISTER_METHOD(0x025CD210, app::String*, get_MachinePath, )
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _CanSecure, app::String* root)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _ProtectUser, app::String* path)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _ProtectMachine, app::String* path)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _IsUserProtected, app::String* path)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, _IsMachineProtected, app::String* path)
    IL2CPP_REGISTER_METHOD(0x025CD790, bool, CanSecure, app::String* path)
    IL2CPP_REGISTER_METHOD(0x025CD880, bool, ProtectUser, app::String* path)
    IL2CPP_REGISTER_METHOD(0x025CD950, bool, ProtectMachine, app::String* path)
    IL2CPP_REGISTER_METHOD(0x025CDA20, bool, IsUserProtected, app::String* path)
    IL2CPP_REGISTER_METHOD(0x025CDAF0, bool, IsMachineProtected, app::String* path)
    IL2CPP_REGISTER_METHOD(0x01854CD0, bool, get_CanChange, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CDBC0, bool, get_UseDefaultKeyContainer, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CDBE0, bool, get_UseMachineKeyStore, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CDC00, app::String*, get_ContainerName, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CDE30, app::CspParameters*, Copy, app::KeyPairPersistence* this_ptr, app::CspParameters* p)
    IL2CPP_REGISTER_METHOD(0x025CDFD0, void, FromXml, app::KeyPairPersistence* this_ptr, app::String* xml)
    IL2CPP_REGISTER_METHOD(0x025CE210, app::String*, ToXml, app::KeyPairPersistence* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025CE4E0, void, cctor, )
} // namespace app::classes::Mono::Security::Cryptography::KeyPairPersistence
