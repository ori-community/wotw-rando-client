#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterInstantStop_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterInstantStop_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInstantStop_DEFINED)
#include <Modloader/app/structs/CharacterInstantStop__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterInstantStop__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterInstantStop_DEFINED
struct CharacterInstantStop__Class;
struct CharacterInstantStop {
    struct CharacterInstantStop__Class* klass;
    MonitorData* monitor;
    struct CharacterInstantStop__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterInstantStop_FWDDECL)
#define IL2CPP_STRUCT_CharacterInstantStop_FWDDECL
#include <Modloader/app/structs/CharacterInstantStop__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterInstantStop_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterInstantStop_DEFINED) && !defined(IL2CPP_STRUCT_CharacterInstantStop_FWDDECL)
#include <Modloader/app/structs/CharacterInstantStop.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterInstantStop.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
