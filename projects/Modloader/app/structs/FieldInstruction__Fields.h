#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_FieldInstruction__Fields_DEFINED
struct FieldInfo_1;
struct __declspec(align(8)) FieldInstruction__Fields {
    struct FieldInfo_1* _field;
};
#endif
#if !defined(IL2CPP_STRUCT_FieldInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_FieldInstruction__Fields_FWDDECL
#include <Modloader/app/structs/FieldInfo_1.h>
#endif
#undef IL2CPP_STRUCT_FieldInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FieldInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/FieldInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
