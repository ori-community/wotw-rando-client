#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDrill_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDrill_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDrill_DEFINED)
#include <Modloader/app/structs/SeinDrill__Fields.h>
#if defined(IL2CPP_STRUCT_SeinDrill__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDrill_DEFINED
struct SeinDrill__Class;
struct SeinDrill {
    struct SeinDrill__Class* klass;
    MonitorData* monitor;
    struct SeinDrill__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDrill_FWDDECL)
#define IL2CPP_STRUCT_SeinDrill_FWDDECL
#include <Modloader/app/structs/SeinDrill__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinDrill_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDrill_DEFINED) && !defined(IL2CPP_STRUCT_SeinDrill_FWDDECL)
#include <Modloader/app/structs/SeinDrill.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDrill.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
