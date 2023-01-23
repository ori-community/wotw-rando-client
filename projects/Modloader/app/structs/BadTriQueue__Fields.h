#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BadTriQueue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BadTriQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_BadTriQueue__Fields_DEFINED
struct BadTriangle__Array;
struct Int32__Array;
struct __declspec(align(8)) BadTriQueue__Fields {
    struct BadTriangle__Array* queuefront;
    struct BadTriangle__Array* queuetail;
    struct Int32__Array* nextnonemptyq;
    int32_t firstnonemptyq;
    int32_t count;
};
#endif
#if !defined(IL2CPP_STRUCT_BadTriQueue__Fields_FWDDECL)
#define IL2CPP_STRUCT_BadTriQueue__Fields_FWDDECL
#include <Modloader/app/structs/BadTriangle__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_BadTriQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BadTriQueue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BadTriQueue__Fields_FWDDECL)
#include <Modloader/app/structs/BadTriQueue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BadTriQueue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
