#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_DEFINED
struct Type;
struct __declspec(align(8)) NewArrayBoundsInstruction__Fields {
    struct Type* _elementType;
    int32_t _rank;
};
#endif
#if !defined(IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_FWDDECL
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NewArrayBoundsInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/NewArrayBoundsInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewArrayBoundsInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
