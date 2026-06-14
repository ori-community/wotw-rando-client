#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_NewInstruction__Fields_DEFINED
struct ConstructorInfo;
struct __declspec(align(8)) NewInstruction__Fields {
    struct ConstructorInfo* _constructor;
    int32_t _argumentCount;
};
#endif
#if !defined(IL2CPP_STRUCT_NewInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_NewInstruction__Fields_FWDDECL
#include <Modloader/app/structs/ConstructorInfo.h>
#endif
#undef IL2CPP_STRUCT_NewInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NewInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/NewInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
