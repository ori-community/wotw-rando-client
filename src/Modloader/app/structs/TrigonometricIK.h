#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrigonometricIK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrigonometricIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrigonometricIK_DEFINED)
#include <Modloader/app/structs/TrigonometricIK__Fields.h>
#if defined(IL2CPP_STRUCT_TrigonometricIK__Fields_DEFINED)
#define IL2CPP_STRUCT_TrigonometricIK_DEFINED
struct TrigonometricIK__Class;
struct TrigonometricIK {
    struct TrigonometricIK__Class* klass;
    MonitorData* monitor;
    struct TrigonometricIK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrigonometricIK_FWDDECL)
#define IL2CPP_STRUCT_TrigonometricIK_FWDDECL
#include <Modloader/app/structs/TrigonometricIK__Class.h>
#endif
#undef IL2CPP_STRUCT_TrigonometricIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrigonometricIK_DEFINED) && !defined(IL2CPP_STRUCT_TrigonometricIK_FWDDECL)
#include <Modloader/app/structs/TrigonometricIK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrigonometricIK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
