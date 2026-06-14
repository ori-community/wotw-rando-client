#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDashNew_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDashNew_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashNew_DEFINED)
#include <Modloader/app/structs/SeinDashNew__Fields.h>
#if defined(IL2CPP_STRUCT_SeinDashNew__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDashNew_DEFINED
struct SeinDashNew__Class;
struct SeinDashNew {
    struct SeinDashNew__Class* klass;
    MonitorData* monitor;
    struct SeinDashNew__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDashNew_FWDDECL)
#define IL2CPP_STRUCT_SeinDashNew_FWDDECL
#include <Modloader/app/structs/SeinDashNew__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinDashNew_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashNew_DEFINED) && !defined(IL2CPP_STRUCT_SeinDashNew_FWDDECL)
#include <Modloader/app/structs/SeinDashNew.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDashNew.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
