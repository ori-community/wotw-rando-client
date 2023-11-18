#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvokableCall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvokableCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvokableCall__Fields_DEFINED)
#define IL2CPP_STRUCT_InvokableCall__Fields_DEFINED
struct UnityAction;
struct __declspec(align(8)) InvokableCall__Fields {
    struct UnityAction* Delegate;
};
#endif
#if !defined(IL2CPP_STRUCT_InvokableCall__Fields_FWDDECL)
#define IL2CPP_STRUCT_InvokableCall__Fields_FWDDECL
#include <Modloader/app/structs/UnityAction.h>
#endif
#undef IL2CPP_STRUCT_InvokableCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvokableCall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InvokableCall__Fields_FWDDECL)
#include <Modloader/app/structs/InvokableCall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvokableCall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
