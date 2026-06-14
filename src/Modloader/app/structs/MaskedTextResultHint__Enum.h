#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskedTextResultHint__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskedTextResultHint__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextResultHint__Enum_DEFINED)
#define IL2CPP_STRUCT_MaskedTextResultHint__Enum_DEFINED
enum class MaskedTextResultHint__Enum : int32_t {
    Unknown = 0x00000000,
    CharacterEscaped = 0x00000001,
    NoEffect = 0x00000002,
    SideEffect = 0x00000003,
    Success = 0x00000004,
    AsciiCharacterExpected = -1,
    AlphanumericCharacterExpected = -2,
    DigitExpected = -3,
    LetterExpected = -4,
    SignedDigitExpected = -5,
    InvalidInput = -51,
    PromptCharNotAllowed = -52,
    UnavailableEditPosition = -53,
    NonEditPosition = -54,
    PositionOutOfRange = -55,
};
#endif
#if !defined(IL2CPP_STRUCT_MaskedTextResultHint__Enum_FWDDECL)
#define IL2CPP_STRUCT_MaskedTextResultHint__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MaskedTextResultHint__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskedTextResultHint__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MaskedTextResultHint__Enum_FWDDECL)
#include <Modloader/app/structs/MaskedTextResultHint__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskedTextResultHint__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
