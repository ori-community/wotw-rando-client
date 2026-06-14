#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewArrayInitInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewArrayInitInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayInitInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_NewArrayInitInstruction__Fields_DEFINED
struct Type;
struct __declspec(align(8)) NewArrayInitInstruction__Fields {
    struct Type* _elementType;
    int32_t _elementCount;
};
#endif
#if !defined(IL2CPP_STRUCT_NewArrayInitInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_NewArrayInitInstruction__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_NewArrayInitInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayInitInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NewArrayInitInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/NewArrayInitInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewArrayInitInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
