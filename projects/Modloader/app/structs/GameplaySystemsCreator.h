#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplaySystemsCreator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplaySystemsCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySystemsCreator_DEFINED)
#include <Modloader/app/structs/GameplaySystemsCreator__Fields.h>
#if defined(IL2CPP_STRUCT_GameplaySystemsCreator__Fields_DEFINED)
#define IL2CPP_STRUCT_GameplaySystemsCreator_DEFINED
struct GameplaySystemsCreator__Class;
struct GameplaySystemsCreator {
    struct GameplaySystemsCreator__Class* klass;
    MonitorData* monitor;
    struct GameplaySystemsCreator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplaySystemsCreator_FWDDECL)
#define IL2CPP_STRUCT_GameplaySystemsCreator_FWDDECL
#include <Modloader/app/structs/GameplaySystemsCreator__Class.h>
#endif
#undef IL2CPP_STRUCT_GameplaySystemsCreator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySystemsCreator_DEFINED) && !defined(IL2CPP_STRUCT_GameplaySystemsCreator_FWDDECL)
#include <Modloader/app/structs/GameplaySystemsCreator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplaySystemsCreator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
