#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeIsInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeIsInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeIsInstruction_DEFINED)
#include <Modloader/app/structs/TypeIsInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_TypeIsInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeIsInstruction_DEFINED
struct TypeIsInstruction__Class;
struct TypeIsInstruction {
    struct TypeIsInstruction__Class* klass;
    MonitorData* monitor;
    struct TypeIsInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeIsInstruction_FWDDECL)
#define IL2CPP_STRUCT_TypeIsInstruction_FWDDECL
#include <Modloader/app/structs/TypeIsInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeIsInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeIsInstruction_DEFINED) && !defined(IL2CPP_STRUCT_TypeIsInstruction_FWDDECL)
#include <Modloader/app/structs/TypeIsInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeIsInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
