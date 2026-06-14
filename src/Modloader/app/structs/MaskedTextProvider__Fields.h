#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskedTextProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskedTextProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextProvider__Fields_DEFINED)
#include <Modloader/app/structs/BitVector32.h>
#if defined(IL2CPP_STRUCT_BitVector32_DEFINED)
#define IL2CPP_STRUCT_MaskedTextProvider__Fields_DEFINED
struct CultureInfo;
struct StringBuilder;
struct String;
struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_;
struct __declspec(align(8)) MaskedTextProvider__Fields {
    struct BitVector32 flagState;
    struct CultureInfo* culture;
    struct StringBuilder* testString;
    int32_t assignedCharCount;
    int32_t requiredCharCount;
    int32_t requiredEditChars;
    int32_t optionalEditChars;
    struct String* mask;
    uint16_t passwordChar;
    uint16_t promptChar;
    struct List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_* stringDescriptor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaskedTextProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaskedTextProvider__Fields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/List_1_System_ComponentModel_MaskedTextProvider_CharDescriptor_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_MaskedTextProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaskedTextProvider__Fields_FWDDECL)
#include <Modloader/app/structs/MaskedTextProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskedTextProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
