#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationCharacterProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationCharacterProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationCharacterProvider_DEFINED)
#include <Modloader/app/structs/AnimationCharacterProvider__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationCharacterProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationCharacterProvider_DEFINED
struct AnimationCharacterProvider__Class;
struct AnimationCharacterProvider {
    struct AnimationCharacterProvider__Class* klass;
    MonitorData* monitor;
    struct AnimationCharacterProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationCharacterProvider_FWDDECL)
#define IL2CPP_STRUCT_AnimationCharacterProvider_FWDDECL
#include <Modloader/app/structs/AnimationCharacterProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationCharacterProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationCharacterProvider_DEFINED) && !defined(IL2CPP_STRUCT_AnimationCharacterProvider_FWDDECL)
#include <Modloader/app/structs/AnimationCharacterProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationCharacterProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
