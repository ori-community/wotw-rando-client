#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUberAtlasExternal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUberAtlasExternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberAtlasExternal_DEFINED)
#define IL2CPP_STRUCT_IUberAtlasExternal_DEFINED
struct IUberAtlasExternal__Class;
struct IUberAtlasExternal {
    struct IUberAtlasExternal__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUberAtlasExternal_FWDDECL)
#define IL2CPP_STRUCT_IUberAtlasExternal_FWDDECL
#include <Modloader/app/structs/IUberAtlasExternal__Class.h>
#endif
#undef IL2CPP_STRUCT_IUberAtlasExternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberAtlasExternal_DEFINED) && !defined(IL2CPP_STRUCT_IUberAtlasExternal_FWDDECL)
#include <Modloader/app/structs/IUberAtlasExternal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUberAtlasExternal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
