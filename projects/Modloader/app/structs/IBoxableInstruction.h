#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBoxableInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBoxableInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBoxableInstruction_DEFINED)
#define IL2CPP_STRUCT_IBoxableInstruction_DEFINED
struct IBoxableInstruction__Class;
struct IBoxableInstruction {
    struct IBoxableInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBoxableInstruction_FWDDECL)
#define IL2CPP_STRUCT_IBoxableInstruction_FWDDECL
#include <Modloader/app/structs/IBoxableInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_IBoxableInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBoxableInstruction_DEFINED) && !defined(IL2CPP_STRUCT_IBoxableInstruction_FWDDECL)
#include <Modloader/app/structs/IBoxableInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBoxableInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
