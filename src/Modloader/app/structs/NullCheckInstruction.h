#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NullCheckInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NullCheckInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullCheckInstruction_DEFINED)
#define IL2CPP_STRUCT_NullCheckInstruction_DEFINED
struct NullCheckInstruction__Class;
struct NullCheckInstruction {
    struct NullCheckInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NullCheckInstruction_FWDDECL)
#define IL2CPP_STRUCT_NullCheckInstruction_FWDDECL
#include <Modloader/app/structs/NullCheckInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NullCheckInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullCheckInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NullCheckInstruction_FWDDECL)
#include <Modloader/app/structs/NullCheckInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NullCheckInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
