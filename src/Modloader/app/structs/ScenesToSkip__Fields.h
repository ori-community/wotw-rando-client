#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesToSkip__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesToSkip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesToSkip__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenesToSkip__Fields_DEFINED
struct List_1_System_String_;
struct __declspec(align(8)) ScenesToSkip__Fields {
    struct List_1_System_String_* Scenes;
};
#endif
#if !defined(IL2CPP_STRUCT_ScenesToSkip__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenesToSkip__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_ScenesToSkip__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesToSkip__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenesToSkip__Fields_FWDDECL)
#include <Modloader/app/structs/ScenesToSkip__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesToSkip__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
