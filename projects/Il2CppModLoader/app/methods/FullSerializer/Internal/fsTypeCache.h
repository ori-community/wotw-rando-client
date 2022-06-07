#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsTypeCache {
    IL2CPP_REGISTER_METHOD(0x0165DC10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x0165E5D0, void, OnAssemblyLoaded, (app::Object * sender, app::AssemblyLoadEventArgs * args))
    IL2CPP_REGISTER_METHODINFO(0x04745780, fsTypeCache_OnAssemblyLoaded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0165E910, bool, TryDirectTypeLookup, (app::String * assembly_name, app::String * type_name, app::Type * * type))
    IL2CPP_REGISTER_METHOD(0x0165EAB0, bool, TryIndirectTypeLookup, (app::String * type_name, app::Type * * type))
    IL2CPP_REGISTER_METHOD(0x0165EDD0, void, Reset, ())
    IL2CPP_REGISTER_METHOD(0x0165EF60, app::Type *, GetType_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0165F000, app::Type *, GetType_2, (app::String * name, app::String * assembly_hint))
}
