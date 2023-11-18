#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUITargetAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUITargetAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUITargetAttribute_DEFINED)
#include <Modloader/app/structs/GUITargetAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_GUITargetAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_GUITargetAttribute_DEFINED
struct GUITargetAttribute__Class;
struct GUITargetAttribute {
    struct GUITargetAttribute__Class* klass;
    MonitorData* monitor;
    struct GUITargetAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUITargetAttribute_FWDDECL)
#define IL2CPP_STRUCT_GUITargetAttribute_FWDDECL
#include <Modloader/app/structs/GUITargetAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_GUITargetAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUITargetAttribute_DEFINED) && !defined(IL2CPP_STRUCT_GUITargetAttribute_FWDDECL)
#include <Modloader/app/structs/GUITargetAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUITargetAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
