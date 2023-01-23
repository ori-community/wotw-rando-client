#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrInstruction_DEFINED)
#define IL2CPP_STRUCT_OrInstruction_DEFINED
struct OrInstruction__Class;
struct OrInstruction {
    struct OrInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OrInstruction_FWDDECL)
#define IL2CPP_STRUCT_OrInstruction_FWDDECL
#include <Modloader/app/structs/OrInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_OrInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrInstruction_DEFINED) && !defined(IL2CPP_STRUCT_OrInstruction_FWDDECL)
#include <Modloader/app/structs/OrInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
