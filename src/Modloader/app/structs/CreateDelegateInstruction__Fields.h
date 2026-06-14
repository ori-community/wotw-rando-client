#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateDelegateInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateDelegateInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateDelegateInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateDelegateInstruction__Fields_DEFINED
struct LightDelegateCreator;
struct __declspec(align(8)) CreateDelegateInstruction__Fields {
    struct LightDelegateCreator* _creator;
};
#endif
#if !defined(IL2CPP_STRUCT_CreateDelegateInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_CreateDelegateInstruction__Fields_FWDDECL
#include <Modloader/app/structs/LightDelegateCreator.h>
#endif
#undef IL2CPP_STRUCT_CreateDelegateInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateDelegateInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CreateDelegateInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/CreateDelegateInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateDelegateInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
