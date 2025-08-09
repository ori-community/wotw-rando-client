#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssemblyLoadEventArgs.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::FullSerializer::Internal::fsTypeCache {
    IL2CPP_REGISTER_METHOD(0x0165DC10, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0165E5D0, void, OnAssemblyLoaded, app::Object* sender, app::AssemblyLoadEventArgs* args)
    IL2CPP_REGISTER_METHOD(0x0165E910, bool, TryDirectTypeLookup, app::String* assembly_name, app::String* type_name, app::Type** type)
    IL2CPP_REGISTER_METHOD(0x0165EAB0, bool, TryIndirectTypeLookup, app::String* type_name, app::Type** type)
    IL2CPP_REGISTER_METHOD(0x0165EDD0, void, Reset, )
    IL2CPP_REGISTER_METHOD(0x0165EF60, app::Type*, GetType_1, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0165F000, app::Type*, GetType_2, app::String* name, app::String* assembly_hint)
} // namespace app::classes::FullSerializer::Internal::fsTypeCache
