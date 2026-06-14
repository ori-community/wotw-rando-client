#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tablet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tablet_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tablet_DEFINED)
#define IL2CPP_STRUCT_Tablet_DEFINED
struct Tablet__Class;
struct Tablet {
    struct Tablet__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Tablet_FWDDECL)
#define IL2CPP_STRUCT_Tablet_FWDDECL
#include <Modloader/app/structs/Tablet__Class.h>
#endif
#undef IL2CPP_STRUCT_Tablet_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tablet_DEFINED) && !defined(IL2CPP_STRUCT_Tablet_FWDDECL)
#include <Modloader/app/structs/Tablet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tablet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
