#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModuloInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModuloInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModuloInstruction_DEFINED)
#define IL2CPP_STRUCT_ModuloInstruction_DEFINED
struct ModuloInstruction__Class;
struct ModuloInstruction {
    struct ModuloInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ModuloInstruction_FWDDECL)
#define IL2CPP_STRUCT_ModuloInstruction_FWDDECL
#include <Modloader/app/structs/ModuloInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_ModuloInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModuloInstruction_DEFINED) && !defined(IL2CPP_STRUCT_ModuloInstruction_FWDDECL)
#include <Modloader/app/structs/ModuloInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModuloInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
