#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NullableMethodCallInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NullableMethodCallInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullableMethodCallInstruction_DEFINED)
#define IL2CPP_STRUCT_NullableMethodCallInstruction_DEFINED
struct NullableMethodCallInstruction__Class;
struct NullableMethodCallInstruction {
    struct NullableMethodCallInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NullableMethodCallInstruction_FWDDECL)
#define IL2CPP_STRUCT_NullableMethodCallInstruction_FWDDECL
#include <Modloader/app/structs/NullableMethodCallInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NullableMethodCallInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NullableMethodCallInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NullableMethodCallInstruction_FWDDECL)
#include <Modloader/app/structs/NullableMethodCallInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NullableMethodCallInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
