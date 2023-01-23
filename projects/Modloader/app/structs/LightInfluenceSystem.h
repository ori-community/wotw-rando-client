#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightInfluenceSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightInfluenceSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluenceSystem_DEFINED)
#define IL2CPP_STRUCT_LightInfluenceSystem_DEFINED
struct LightInfluenceSystem__Class;
struct LightInfluenceSystem {
    struct LightInfluenceSystem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LightInfluenceSystem_FWDDECL)
#define IL2CPP_STRUCT_LightInfluenceSystem_FWDDECL
#include <Modloader/app/structs/LightInfluenceSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_LightInfluenceSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluenceSystem_DEFINED) && !defined(IL2CPP_STRUCT_LightInfluenceSystem_FWDDECL)
#include <Modloader/app/structs/LightInfluenceSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightInfluenceSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
