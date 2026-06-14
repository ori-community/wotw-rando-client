#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EqualInstruction_EqualReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EqualInstruction_EqualReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_EqualInstruction_EqualReference_DEFINED)
#define IL2CPP_STRUCT_EqualInstruction_EqualReference_DEFINED
struct EqualInstruction_EqualReference__Class;
struct EqualInstruction_EqualReference {
    struct EqualInstruction_EqualReference__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EqualInstruction_EqualReference_FWDDECL)
#define IL2CPP_STRUCT_EqualInstruction_EqualReference_FWDDECL
#include <Modloader/app/structs/EqualInstruction_EqualReference__Class.h>
#endif
#undef IL2CPP_STRUCT_EqualInstruction_EqualReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_EqualInstruction_EqualReference_DEFINED) && !defined(IL2CPP_STRUCT_EqualInstruction_EqualReference_FWDDECL)
#include <Modloader/app/structs/EqualInstruction_EqualReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EqualInstruction_EqualReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
