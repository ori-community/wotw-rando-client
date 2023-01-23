#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompareInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompareInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompareInfo_DEFINED)
#include <Modloader/app/structs/CompareInfo__Fields.h>
#if defined(IL2CPP_STRUCT_CompareInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CompareInfo_DEFINED
struct CompareInfo__Class;
struct CompareInfo {
    struct CompareInfo__Class* klass;
    MonitorData* monitor;
    struct CompareInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompareInfo_FWDDECL)
#define IL2CPP_STRUCT_CompareInfo_FWDDECL
#include <Modloader/app/structs/CompareInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CompareInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompareInfo_DEFINED) && !defined(IL2CPP_STRUCT_CompareInfo_FWDDECL)
#include <Modloader/app/structs/CompareInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompareInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
