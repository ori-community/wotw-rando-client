#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtGroupComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtGroupComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtGroupComponent_DEFINED)
#include <Modloader/app/structs/ArtGroupComponent__Fields.h>
#if defined(IL2CPP_STRUCT_ArtGroupComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtGroupComponent_DEFINED
struct ArtGroupComponent__Class;
struct ArtGroupComponent {
    struct ArtGroupComponent__Class* klass;
    MonitorData* monitor;
    struct ArtGroupComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtGroupComponent_FWDDECL)
#define IL2CPP_STRUCT_ArtGroupComponent_FWDDECL
#include <Modloader/app/structs/ArtGroupComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtGroupComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtGroupComponent_DEFINED) && !defined(IL2CPP_STRUCT_ArtGroupComponent_FWDDECL)
#include <Modloader/app/structs/ArtGroupComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtGroupComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
