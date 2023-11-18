#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISite_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISite_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISite_DEFINED)
#define IL2CPP_STRUCT_ISite_DEFINED
struct ISite__Class;
struct ISite {
    struct ISite__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISite_FWDDECL)
#define IL2CPP_STRUCT_ISite_FWDDECL
#include <Modloader/app/structs/ISite__Class.h>
#endif
#undef IL2CPP_STRUCT_ISite_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISite_DEFINED) && !defined(IL2CPP_STRUCT_ISite_FWDDECL)
#include <Modloader/app/structs/ISite.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISite.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
