#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionRotationModifier__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionRotationModifier__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionRotationModifier__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InteractionRotationModifier__StaticFields_DEFINED
struct Varying2DSoundProvider;
struct String;
struct UberInteractionManager_PropertyIDCache;
struct InteractionRotationModifier__StaticFields {
    struct Varying2DSoundProvider* s_bushSoundProvider;
    struct Varying2DSoundProvider* s_desertBushSoundProvider;
    struct Varying2DSoundProvider* s_paperSoundProvider;
    struct String* s_name;
    struct UberInteractionManager_PropertyIDCache* s_cache;
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionRotationModifier__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InteractionRotationModifier__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberInteractionManager_PropertyIDCache.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_InteractionRotationModifier__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionRotationModifier__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionRotationModifier__StaticFields_FWDDECL)
#include <Modloader/app/structs/InteractionRotationModifier__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionRotationModifier__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
