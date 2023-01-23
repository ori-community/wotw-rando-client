#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterSpriteMirror__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterSpriteMirror__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterSpriteMirror__Fields_DEFINED)
#include <Modloader/app/structs/CharacterSpriteMirror_MirrorMode__Enum.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_CharacterSpriteMirror_MirrorMode__Enum_DEFINED)
#define IL2CPP_STRUCT_CharacterSpriteMirror__Fields_DEFINED
struct CharacterSpriteMirror__Fields {
    struct CharacterState__Fields _;
    int32_t m_lock;
    CharacterSpriteMirror_MirrorMode__Enum Mirror;

    bool StartFacingLeft;
    bool m_faceLeft;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterSpriteMirror__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterSpriteMirror__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CharacterSpriteMirror__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterSpriteMirror__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterSpriteMirror__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterSpriteMirror__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterSpriteMirror__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
