#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_DEFINED
struct MoonAnimation;
struct MokiNPCPlaceholder__Fields {
    struct NPCEntityPlaceholder__Fields _;
    struct MoonAnimation* IdleAnimation;
    bool IsOnBridge;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/MokiNPCPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MokiNPCPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
