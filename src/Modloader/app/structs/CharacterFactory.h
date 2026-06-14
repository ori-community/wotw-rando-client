#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterFactory_DEFINED)
#include <Modloader/app/structs/CharacterFactory__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterFactory__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterFactory_DEFINED
struct CharacterFactory__Class;
struct CharacterFactory {
    struct CharacterFactory__Class* klass;
    MonitorData* monitor;
    struct CharacterFactory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterFactory_FWDDECL)
#define IL2CPP_STRUCT_CharacterFactory_FWDDECL
#include <Modloader/app/structs/CharacterFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterFactory_DEFINED) && !defined(IL2CPP_STRUCT_CharacterFactory_FWDDECL)
#include <Modloader/app/structs/CharacterFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
