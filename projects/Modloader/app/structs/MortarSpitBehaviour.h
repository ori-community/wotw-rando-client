#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarSpitBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarSpitBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarSpitBehaviour_DEFINED)
#include <Modloader/app/structs/MortarSpitBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MortarSpitBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarSpitBehaviour_DEFINED
struct MortarSpitBehaviour__Class;
struct MortarSpitBehaviour {
    struct MortarSpitBehaviour__Class* klass;
    MonitorData* monitor;
    struct MortarSpitBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarSpitBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MortarSpitBehaviour_FWDDECL
#include <Modloader/app/structs/MortarSpitBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarSpitBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarSpitBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MortarSpitBehaviour_FWDDECL)
#include <Modloader/app/structs/MortarSpitBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarSpitBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
