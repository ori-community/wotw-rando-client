#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonShort_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonShort_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonShort_DEFINED)
#include <Modloader/app/structs/MoonShort__Fields.h>
#if defined(IL2CPP_STRUCT_MoonShort__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonShort_DEFINED
struct MoonShort__Class;
struct MoonShort {
    struct MoonShort__Class* klass;
    MonitorData* monitor;
    struct MoonShort__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonShort_FWDDECL)
#define IL2CPP_STRUCT_MoonShort_FWDDECL
#include <Modloader/app/structs/MoonShort__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonShort_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonShort_DEFINED) && !defined(IL2CPP_STRUCT_MoonShort_FWDDECL)
#include <Modloader/app/structs/MoonShort.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonShort.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
