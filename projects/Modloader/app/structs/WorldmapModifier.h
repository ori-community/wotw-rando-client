#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldmapModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldmapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldmapModifier_DEFINED)
#include <Modloader/app/structs/WorldmapModifier__Fields.h>
#if defined(IL2CPP_STRUCT_WorldmapModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldmapModifier_DEFINED
struct WorldmapModifier__Class;
struct WorldmapModifier {
    struct WorldmapModifier__Class* klass;
    MonitorData* monitor;
    struct WorldmapModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldmapModifier_FWDDECL)
#define IL2CPP_STRUCT_WorldmapModifier_FWDDECL
#include <Modloader/app/structs/WorldmapModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldmapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldmapModifier_DEFINED) && !defined(IL2CPP_STRUCT_WorldmapModifier_FWDDECL)
#include <Modloader/app/structs/WorldmapModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldmapModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
