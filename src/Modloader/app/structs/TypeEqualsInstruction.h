#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeEqualsInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeEqualsInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeEqualsInstruction_DEFINED)
#define IL2CPP_STRUCT_TypeEqualsInstruction_DEFINED
struct TypeEqualsInstruction__Class;
struct TypeEqualsInstruction {
    struct TypeEqualsInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeEqualsInstruction_FWDDECL)
#define IL2CPP_STRUCT_TypeEqualsInstruction_FWDDECL
#include <Modloader/app/structs/TypeEqualsInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeEqualsInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeEqualsInstruction_DEFINED) && !defined(IL2CPP_STRUCT_TypeEqualsInstruction_FWDDECL)
#include <Modloader/app/structs/TypeEqualsInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeEqualsInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
