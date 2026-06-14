#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWindupBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWindupBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWindupBehaviour_DEFINED)
#include <Modloader/app/structs/MortarWindupBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MortarWindupBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWindupBehaviour_DEFINED
struct MortarWindupBehaviour__Class;
struct MortarWindupBehaviour {
    struct MortarWindupBehaviour__Class* klass;
    MonitorData* monitor;
    struct MortarWindupBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarWindupBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MortarWindupBehaviour_FWDDECL
#include <Modloader/app/structs/MortarWindupBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarWindupBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWindupBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MortarWindupBehaviour_FWDDECL)
#include <Modloader/app/structs/MortarWindupBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWindupBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
