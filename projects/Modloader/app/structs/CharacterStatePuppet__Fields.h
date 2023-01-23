#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterStatePuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterStatePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#include <Modloader/app/structs/GenericPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_GenericPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED
struct DynamicDataResolver;
struct IPuppet;
struct CharacterStatePuppet__Fields {
    struct GenericPuppet__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct IPuppet* m_puppetMaster;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterStatePuppet__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/IPuppet.h>
#endif
#undef IL2CPP_STRUCT_CharacterStatePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
