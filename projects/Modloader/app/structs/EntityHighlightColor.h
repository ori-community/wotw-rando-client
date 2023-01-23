#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHighlightColor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHighlightColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHighlightColor_DEFINED)
#include <Modloader/app/structs/EntityHighlightColor__Fields.h>
#if defined(IL2CPP_STRUCT_EntityHighlightColor__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityHighlightColor_DEFINED
struct EntityHighlightColor__Class;
struct EntityHighlightColor {
    struct EntityHighlightColor__Class* klass;
    MonitorData* monitor;
    struct EntityHighlightColor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityHighlightColor_FWDDECL)
#define IL2CPP_STRUCT_EntityHighlightColor_FWDDECL
#include <Modloader/app/structs/EntityHighlightColor__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityHighlightColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHighlightColor_DEFINED) && !defined(IL2CPP_STRUCT_EntityHighlightColor_FWDDECL)
#include <Modloader/app/structs/EntityHighlightColor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHighlightColor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
