#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_GhostManager__StaticFields_DEFINED
struct GhostManager;
struct GhostManager__StaticFields {
    struct GhostManager* instance;
    bool s_preRecordTrackingEnabled;
};
#endif
#if !defined(IL2CPP_STRUCT_GhostManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GhostManager__StaticFields_FWDDECL
#include <Modloader/app/structs/GhostManager.h>
#endif
#undef IL2CPP_STRUCT_GhostManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GhostManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/GhostManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
