#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FromBase64Transform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FromBase64Transform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FromBase64Transform__Fields_DEFINED)
#include <Modloader/app/structs/FromBase64TransformMode__Enum.h>
#if defined(IL2CPP_STRUCT_FromBase64TransformMode__Enum_DEFINED)
#define IL2CPP_STRUCT_FromBase64Transform__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) FromBase64Transform__Fields {
    struct Byte__Array* _inputBuffer;
    int32_t _inputIndex;
    FromBase64TransformMode__Enum _whitespaces;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FromBase64Transform__Fields_FWDDECL)
#define IL2CPP_STRUCT_FromBase64Transform__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_FromBase64Transform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FromBase64Transform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FromBase64Transform__Fields_FWDDECL)
#include <Modloader/app/structs/FromBase64Transform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FromBase64Transform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
