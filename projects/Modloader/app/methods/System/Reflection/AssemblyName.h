#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyName.h>
#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/AssemblyNameFlags__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/MonoAssemblyName.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Version.h>

namespace app::classes::System::Reflection::AssemblyName {
    IL2CPP_REGISTER_METHOD(0x02283AA0, void, ctor_1, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02283AB0, bool, ParseAssemblyName, (void* name, app::MonoAssemblyName* aname, bool* is_version_definited, bool* is_token_defined))
    IL2CPP_REGISTER_METHOD(0x02283AC0, void, ctor_2, (app::AssemblyName * this_ptr, app::String* assembly_name))
    IL2CPP_REGISTER_METHOD(0x02283DA0, void, ctor_3, (app::AssemblyName * this_ptr, app::SerializationInfo* si, app::StreamingContext sc))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::AssemblyName * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::CultureInfo*, get_CultureInfo, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_CultureInfo, (app::AssemblyName * this_ptr, app::CultureInfo* value))
    IL2CPP_REGISTER_METHOD(0x003FC7F0, app::AssemblyNameFlags__Enum, get_Flags, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_Flags, (app::AssemblyName * this_ptr, app::AssemblyNameFlags__Enum value))
    IL2CPP_REGISTER_METHOD(0x02284220, app::String*, get_FullName, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Version*, get_Version, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02284720, void, set_Version, (app::AssemblyName * this_ptr, app::Version* value))
    IL2CPP_REGISTER_METHOD(0x02284810, app::String*, ToString, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Byte__Array*, GetPublicKey, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02284860, app::Byte__Array*, GetPublicKeyToken, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02284970, bool, get_IsPublicKeyValid, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02284A40, app::Byte__Array*, InternalGetPublicKeyToken, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173D7D0, void, get_public_token, (uint8_t * token, uint8_t* pubkey, int32_t len))
    IL2CPP_REGISTER_METHOD(0x02284B50, app::Byte__Array*, ComputePublicKeyToken, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02284C40, void, SetPublicKey, (app::AssemblyName * this_ptr, app::Byte__Array* public_key))
    IL2CPP_REGISTER_METHOD(0x02284C60, void, GetObjectData, (app::AssemblyName * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02284EB0, app::Object*, Clone, (app::AssemblyName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02285060, void, OnDeserialization, (app::AssemblyName * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHOD(0x02285070, app::MonoAssemblyName*, GetNativeName, (void* assembly_ptr))
    IL2CPP_REGISTER_METHOD(0x02285080, void, FillName, (app::AssemblyName * this_ptr, app::MonoAssemblyName* native, app::String* code_base, bool add_version, bool add_publickey, bool default_token, bool assembly_ref))
    IL2CPP_REGISTER_METHOD(0x02285530, app::AssemblyName*, Create, (app::Assembly * assembly, bool fill_codebase))
} // namespace app::classes::System::Reflection::AssemblyName
