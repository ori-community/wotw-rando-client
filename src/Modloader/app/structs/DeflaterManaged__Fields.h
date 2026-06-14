#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflaterManaged__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflaterManaged__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflaterManaged__Fields_DEFINED)
#include <Modloader/app/structs/DeflaterManaged_DeflaterState__Enum.h>
#if defined(IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_DEFINED)
#define IL2CPP_STRUCT_DeflaterManaged__Fields_DEFINED
struct FastEncoder;
struct CopyEncoder;
struct DeflateInput;
struct OutputBuffer;
struct __declspec(align(8)) DeflaterManaged__Fields {
    struct FastEncoder* deflateEncoder;
    struct CopyEncoder* copyEncoder;
    struct DeflateInput* input;
    struct OutputBuffer* output;
    DeflaterManaged_DeflaterState__Enum processingState;

    struct DeflateInput* inputFromHistory;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflaterManaged__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeflaterManaged__Fields_FWDDECL
#include <Modloader/app/structs/CopyEncoder.h>
#include <Modloader/app/structs/DeflateInput.h>
#include <Modloader/app/structs/FastEncoder.h>
#include <Modloader/app/structs/OutputBuffer.h>
#endif
#undef IL2CPP_STRUCT_DeflaterManaged__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflaterManaged__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeflaterManaged__Fields_FWDDECL)
#include <Modloader/app/structs/DeflaterManaged__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflaterManaged__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
