#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterJoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterJoint_DEFINED)
#include <Modloader/app/structs/CharacterJoint__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterJoint__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterJoint_DEFINED
struct CharacterJoint__Class;
struct CharacterJoint {
    struct CharacterJoint__Class* klass;
    MonitorData* monitor;
    struct CharacterJoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterJoint_FWDDECL)
#define IL2CPP_STRUCT_CharacterJoint_FWDDECL
#include <Modloader/app/structs/CharacterJoint__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterJoint_DEFINED) && !defined(IL2CPP_STRUCT_CharacterJoint_FWDDECL)
#include <Modloader/app/structs/CharacterJoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterJoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
