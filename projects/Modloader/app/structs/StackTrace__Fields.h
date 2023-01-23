#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackTrace__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackTrace__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackTrace__Fields_DEFINED)
#define IL2CPP_STRUCT_StackTrace__Fields_DEFINED
struct StackFrame__Array;
struct StackTrace__Array;
struct __declspec(align(8)) StackTrace__Fields {
    struct StackFrame__Array* frames;
    struct StackTrace__Array* captured_traces;
    bool debug_info;
};
#endif
#if !defined(IL2CPP_STRUCT_StackTrace__Fields_FWDDECL)
#define IL2CPP_STRUCT_StackTrace__Fields_FWDDECL
#include <Modloader/app/structs/StackFrame__Array.h>
#include <Modloader/app/structs/StackTrace__Array.h>
#endif
#undef IL2CPP_STRUCT_StackTrace__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackTrace__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StackTrace__Fields_FWDDECL)
#include <Modloader/app/structs/StackTrace__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackTrace__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
