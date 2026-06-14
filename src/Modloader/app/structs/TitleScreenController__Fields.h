#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleScreenController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleScreenController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleScreenController__Fields_DEFINED
struct ActionMethod;
struct TitleScreenController__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod* StartAction;
    bool m_hasRun;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleScreenController__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleScreenController__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#endif
#undef IL2CPP_STRUCT_TitleScreenController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleScreenController__Fields_FWDDECL)
#include <Modloader/app/structs/TitleScreenController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleScreenController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
