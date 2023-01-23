#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinUIEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinUIEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinUIEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinUIEntity__Fields_DEFINED
struct SeinUIEntity__Fields {
    struct TimelineEntity__Fields _;
    bool m_show;
    bool ShowSpiritLight;
    bool ShowSeeds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinUIEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinUIEntity__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinUIEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinUIEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinUIEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SeinUIEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinUIEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
