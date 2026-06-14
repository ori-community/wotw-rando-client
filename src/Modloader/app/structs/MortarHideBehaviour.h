#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarHideBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarHideBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarHideBehaviour_DEFINED)
#include <Modloader/app/structs/MortarHideBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MortarHideBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarHideBehaviour_DEFINED
struct MortarHideBehaviour__Class;
struct MortarHideBehaviour {
    struct MortarHideBehaviour__Class* klass;
    MonitorData* monitor;
    struct MortarHideBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarHideBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MortarHideBehaviour_FWDDECL
#include <Modloader/app/structs/MortarHideBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarHideBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarHideBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MortarHideBehaviour_FWDDECL)
#include <Modloader/app/structs/MortarHideBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarHideBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
