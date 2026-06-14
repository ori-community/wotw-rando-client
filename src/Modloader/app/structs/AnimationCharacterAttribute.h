#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationCharacterAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationCharacterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationCharacterAttribute_DEFINED)
#include <Modloader/app/structs/AnimationCharacterAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationCharacterAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationCharacterAttribute_DEFINED
struct AnimationCharacterAttribute__Class;
struct AnimationCharacterAttribute {
    struct AnimationCharacterAttribute__Class* klass;
    MonitorData* monitor;
    struct AnimationCharacterAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationCharacterAttribute_FWDDECL)
#define IL2CPP_STRUCT_AnimationCharacterAttribute_FWDDECL
#include <Modloader/app/structs/AnimationCharacterAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationCharacterAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationCharacterAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AnimationCharacterAttribute_FWDDECL)
#include <Modloader/app/structs/AnimationCharacterAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationCharacterAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
