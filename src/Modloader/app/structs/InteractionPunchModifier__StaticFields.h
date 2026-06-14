#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionPunchModifier__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionPunchModifier__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionPunchModifier__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InteractionPunchModifier__StaticFields_DEFINED
struct String;
struct UberInteractionManager_PropertyIDCache;
struct InteractionPunchModifier__StaticFields {
    struct String* s_name;
    struct UberInteractionManager_PropertyIDCache* s_cache;
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionPunchModifier__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InteractionPunchModifier__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberInteractionManager_PropertyIDCache.h>
#endif
#undef IL2CPP_STRUCT_InteractionPunchModifier__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionPunchModifier__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionPunchModifier__StaticFields_FWDDECL)
#include <Modloader/app/structs/InteractionPunchModifier__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionPunchModifier__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
