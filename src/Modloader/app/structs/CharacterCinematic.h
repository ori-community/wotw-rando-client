#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterCinematic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterCinematic_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCinematic_DEFINED)
#include <Modloader/app/structs/CharacterCinematic__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterCinematic__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterCinematic_DEFINED
struct CharacterCinematic__Class;
struct CharacterCinematic {
    struct CharacterCinematic__Class* klass;
    MonitorData* monitor;
    struct CharacterCinematic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterCinematic_FWDDECL)
#define IL2CPP_STRUCT_CharacterCinematic_FWDDECL
#include <Modloader/app/structs/CharacterCinematic__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterCinematic_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterCinematic_DEFINED) && !defined(IL2CPP_STRUCT_CharacterCinematic_FWDDECL)
#include <Modloader/app/structs/CharacterCinematic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterCinematic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
