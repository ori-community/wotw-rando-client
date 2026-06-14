#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinearPath_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinearPath_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinearPath_DEFINED)
#include <Modloader/app/structs/LinearPath__Fields.h>
#if defined(IL2CPP_STRUCT_LinearPath__Fields_DEFINED)
#define IL2CPP_STRUCT_LinearPath_DEFINED
struct LinearPath__Class;
struct LinearPath {
    struct LinearPath__Class* klass;
    MonitorData* monitor;
    struct LinearPath__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinearPath_FWDDECL)
#define IL2CPP_STRUCT_LinearPath_FWDDECL
#include <Modloader/app/structs/LinearPath__Class.h>
#endif
#undef IL2CPP_STRUCT_LinearPath_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinearPath_DEFINED) && !defined(IL2CPP_STRUCT_LinearPath_FWDDECL)
#include <Modloader/app/structs/LinearPath.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinearPath.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
