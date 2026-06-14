#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneSave_c_DisplayClass23_0__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneSave_c_DisplayClass23_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSave_c_DisplayClass23_0__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneSave_c_DisplayClass23_0__Fields_DEFINED
struct Boolean__Array;
struct Action;
struct __declspec(align(8)) XboxOneSave_c_DisplayClass23_0__Fields {
    int32_t completeIterations;
    struct Boolean__Array* completeStatus;
    struct Action* success;
    struct Action* failure;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneSave_c_DisplayClass23_0__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneSave_c_DisplayClass23_0__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Boolean__Array.h>
#endif
#undef IL2CPP_STRUCT_XboxOneSave_c_DisplayClass23_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSave_c_DisplayClass23_0__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneSave_c_DisplayClass23_0__Fields_FWDDECL)
#include <Modloader/app/structs/XboxOneSave_c_DisplayClass23_0__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneSave_c_DisplayClass23_0__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
