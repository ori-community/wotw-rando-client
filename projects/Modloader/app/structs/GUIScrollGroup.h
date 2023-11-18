#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIScrollGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIScrollGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIScrollGroup_DEFINED)
#include <Modloader/app/structs/GUIScrollGroup__Fields.h>
#if defined(IL2CPP_STRUCT_GUIScrollGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIScrollGroup_DEFINED
struct GUIScrollGroup__Class;
struct GUIScrollGroup {
    struct GUIScrollGroup__Class* klass;
    MonitorData* monitor;
    struct GUIScrollGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIScrollGroup_FWDDECL)
#define IL2CPP_STRUCT_GUIScrollGroup_FWDDECL
#include <Modloader/app/structs/GUIScrollGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIScrollGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIScrollGroup_DEFINED) && !defined(IL2CPP_STRUCT_GUIScrollGroup_FWDDECL)
#include <Modloader/app/structs/GUIScrollGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIScrollGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
