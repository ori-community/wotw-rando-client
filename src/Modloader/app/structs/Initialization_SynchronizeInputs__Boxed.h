#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Initialization_SynchronizeInputs__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Initialization_SynchronizeInputs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Initialization_SynchronizeInputs__Boxed_DEFINED)
#include <Modloader/app/structs/Initialization_SynchronizeInputs.h>
#if defined(IL2CPP_STRUCT_Initialization_SynchronizeInputs_DEFINED)
#define IL2CPP_STRUCT_Initialization_SynchronizeInputs__Boxed_DEFINED
struct Initialization_SynchronizeInputs__Class;
struct Initialization_SynchronizeInputs__Boxed {
    struct Initialization_SynchronizeInputs__Class* klass;
    MonitorData* monitor;
    struct Initialization_SynchronizeInputs fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Initialization_SynchronizeInputs__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Initialization_SynchronizeInputs__Boxed_FWDDECL
#include <Modloader/app/structs/Initialization_SynchronizeInputs__Class.h>
#endif
#undef IL2CPP_STRUCT_Initialization_SynchronizeInputs__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Initialization_SynchronizeInputs__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Initialization_SynchronizeInputs__Boxed_FWDDECL)
#include <Modloader/app/structs/Initialization_SynchronizeInputs__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Initialization_SynchronizeInputs__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
