#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredUberStateInt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredUberStateInt_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateInt_DEFINED)
#include <Modloader/app/structs/DesiredUberStateInt__Fields.h>
#if defined(IL2CPP_STRUCT_DesiredUberStateInt__Fields_DEFINED)
#define IL2CPP_STRUCT_DesiredUberStateInt_DEFINED
struct DesiredUberStateInt__Class;
struct DesiredUberStateInt {
    struct DesiredUberStateInt__Class* klass;
    MonitorData* monitor;
    struct DesiredUberStateInt__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesiredUberStateInt_FWDDECL)
#define IL2CPP_STRUCT_DesiredUberStateInt_FWDDECL
#include <Modloader/app/structs/DesiredUberStateInt__Class.h>
#endif
#undef IL2CPP_STRUCT_DesiredUberStateInt_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateInt_DEFINED) && !defined(IL2CPP_STRUCT_DesiredUberStateInt_FWDDECL)
#include <Modloader/app/structs/DesiredUberStateInt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredUberStateInt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
