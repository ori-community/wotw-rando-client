#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThrowInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThrowInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThrowInstruction_DEFINED)
#include <Modloader/app/structs/ThrowInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_ThrowInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_ThrowInstruction_DEFINED
struct ThrowInstruction__Class;
struct ThrowInstruction {
    struct ThrowInstruction__Class* klass;
    MonitorData* monitor;
    struct ThrowInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThrowInstruction_FWDDECL)
#define IL2CPP_STRUCT_ThrowInstruction_FWDDECL
#include <Modloader/app/structs/ThrowInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_ThrowInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThrowInstruction_DEFINED) && !defined(IL2CPP_STRUCT_ThrowInstruction_FWDDECL)
#include <Modloader/app/structs/ThrowInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThrowInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
