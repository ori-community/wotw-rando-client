#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadStaticFieldInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadStaticFieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadStaticFieldInstruction_DEFINED)
#include <Modloader/app/structs/LoadStaticFieldInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadStaticFieldInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadStaticFieldInstruction_DEFINED
struct LoadStaticFieldInstruction__Class;
struct LoadStaticFieldInstruction {
    struct LoadStaticFieldInstruction__Class* klass;
    MonitorData* monitor;
    struct LoadStaticFieldInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadStaticFieldInstruction_FWDDECL)
#define IL2CPP_STRUCT_LoadStaticFieldInstruction_FWDDECL
#include <Modloader/app/structs/LoadStaticFieldInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadStaticFieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadStaticFieldInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LoadStaticFieldInstruction_FWDDECL)
#include <Modloader/app/structs/LoadStaticFieldInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadStaticFieldInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
