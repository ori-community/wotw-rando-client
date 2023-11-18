#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetArrayItemInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetArrayItemInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetArrayItemInstruction_DEFINED)
#define IL2CPP_STRUCT_GetArrayItemInstruction_DEFINED
struct GetArrayItemInstruction__Class;
struct GetArrayItemInstruction {
    struct GetArrayItemInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GetArrayItemInstruction_FWDDECL)
#define IL2CPP_STRUCT_GetArrayItemInstruction_FWDDECL
#include <Modloader/app/structs/GetArrayItemInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_GetArrayItemInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetArrayItemInstruction_DEFINED) && !defined(IL2CPP_STRUCT_GetArrayItemInstruction_FWDDECL)
#include <Modloader/app/structs/GetArrayItemInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetArrayItemInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
