#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTextDisplayValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTextDisplayValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTextDisplayValue_DEFINED)
#include <Modloader/app/structs/UnityTextDisplayValue__Fields.h>
#if defined(IL2CPP_STRUCT_UnityTextDisplayValue__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityTextDisplayValue_DEFINED
struct UnityTextDisplayValue__Class;
struct UnityTextDisplayValue {
    struct UnityTextDisplayValue__Class* klass;
    MonitorData* monitor;
    struct UnityTextDisplayValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityTextDisplayValue_FWDDECL)
#define IL2CPP_STRUCT_UnityTextDisplayValue_FWDDECL
#include <Modloader/app/structs/UnityTextDisplayValue__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityTextDisplayValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTextDisplayValue_DEFINED) && !defined(IL2CPP_STRUCT_UnityTextDisplayValue_FWDDECL)
#include <Modloader/app/structs/UnityTextDisplayValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTextDisplayValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
