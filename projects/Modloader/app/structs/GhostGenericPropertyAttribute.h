#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostGenericPropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostGenericPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericPropertyAttribute_DEFINED)
#include <Modloader/app/structs/GhostGenericPropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_GhostGenericPropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostGenericPropertyAttribute_DEFINED
struct GhostGenericPropertyAttribute__Class;
struct GhostGenericPropertyAttribute {
    struct GhostGenericPropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct GhostGenericPropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostGenericPropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_GhostGenericPropertyAttribute_FWDDECL
#include <Modloader/app/structs/GhostGenericPropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostGenericPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericPropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_GhostGenericPropertyAttribute_FWDDECL)
#include <Modloader/app/structs/GhostGenericPropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostGenericPropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
