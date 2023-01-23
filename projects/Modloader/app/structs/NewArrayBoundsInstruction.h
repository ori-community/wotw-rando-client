#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewArrayBoundsInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewArrayBoundsInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayBoundsInstruction_DEFINED)
#include <Modloader/app/structs/NewArrayBoundsInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_NewArrayBoundsInstruction_DEFINED
struct NewArrayBoundsInstruction__Class;
struct NewArrayBoundsInstruction {
    struct NewArrayBoundsInstruction__Class* klass;
    MonitorData* monitor;
    struct NewArrayBoundsInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewArrayBoundsInstruction_FWDDECL)
#define IL2CPP_STRUCT_NewArrayBoundsInstruction_FWDDECL
#include <Modloader/app/structs/NewArrayBoundsInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NewArrayBoundsInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayBoundsInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NewArrayBoundsInstruction_FWDDECL)
#include <Modloader/app/structs/NewArrayBoundsInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewArrayBoundsInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
