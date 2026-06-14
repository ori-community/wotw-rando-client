#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderInfo_DEFINED)
#define IL2CPP_STRUCT_BuilderInfo_DEFINED
struct BuilderInfo__Class;
struct BuilderInfo {
    struct BuilderInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BuilderInfo_FWDDECL)
#define IL2CPP_STRUCT_BuilderInfo_FWDDECL
#include <Modloader/app/structs/BuilderInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_BuilderInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderInfo_DEFINED) && !defined(IL2CPP_STRUCT_BuilderInfo_FWDDECL)
#include <Modloader/app/structs/BuilderInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
