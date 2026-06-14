#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharactersDynamicProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharactersDynamicProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharactersDynamicProvider_DEFINED)
#include <Modloader/app/structs/CharactersDynamicProvider__Fields.h>
#if defined(IL2CPP_STRUCT_CharactersDynamicProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_CharactersDynamicProvider_DEFINED
struct CharactersDynamicProvider__Class;
struct CharactersDynamicProvider {
    struct CharactersDynamicProvider__Class* klass;
    MonitorData* monitor;
    struct CharactersDynamicProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharactersDynamicProvider_FWDDECL)
#define IL2CPP_STRUCT_CharactersDynamicProvider_FWDDECL
#include <Modloader/app/structs/CharactersDynamicProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_CharactersDynamicProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharactersDynamicProvider_DEFINED) && !defined(IL2CPP_STRUCT_CharactersDynamicProvider_FWDDECL)
#include <Modloader/app/structs/CharactersDynamicProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharactersDynamicProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
