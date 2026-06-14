#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vitals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vitals_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals_DEFINED)
#include <Modloader/app/structs/Vitals__Fields.h>
#if defined(IL2CPP_STRUCT_Vitals__Fields_DEFINED)
#define IL2CPP_STRUCT_Vitals_DEFINED
struct Vitals__Class;
struct Vitals {
    struct Vitals__Class* klass;
    MonitorData* monitor;
    struct Vitals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vitals_FWDDECL)
#define IL2CPP_STRUCT_Vitals_FWDDECL
#include <Modloader/app/structs/Vitals__Class.h>
#endif
#undef IL2CPP_STRUCT_Vitals_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vitals_DEFINED) && !defined(IL2CPP_STRUCT_Vitals_FWDDECL)
#include <Modloader/app/structs/Vitals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vitals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
