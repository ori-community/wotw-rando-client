#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgInfo_DEFINED)
#include <Modloader/app/structs/ArgInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ArgInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ArgInfo_DEFINED
struct ArgInfo__Class;
struct ArgInfo {
    struct ArgInfo__Class* klass;
    MonitorData* monitor;
    struct ArgInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArgInfo_FWDDECL)
#define IL2CPP_STRUCT_ArgInfo_FWDDECL
#include <Modloader/app/structs/ArgInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ArgInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgInfo_DEFINED) && !defined(IL2CPP_STRUCT_ArgInfo_FWDDECL)
#include <Modloader/app/structs/ArgInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
