#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostGenericResourceAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostGenericResourceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericResourceAttribute_DEFINED)
#include <Modloader/app/structs/GhostGenericResourceAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_GhostGenericResourceAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostGenericResourceAttribute_DEFINED
struct GhostGenericResourceAttribute__Class;
struct GhostGenericResourceAttribute {
    struct GhostGenericResourceAttribute__Class* klass;
    MonitorData* monitor;
    struct GhostGenericResourceAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostGenericResourceAttribute_FWDDECL)
#define IL2CPP_STRUCT_GhostGenericResourceAttribute_FWDDECL
#include <Modloader/app/structs/GhostGenericResourceAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostGenericResourceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericResourceAttribute_DEFINED) && !defined(IL2CPP_STRUCT_GhostGenericResourceAttribute_FWDDECL)
#include <Modloader/app/structs/GhostGenericResourceAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostGenericResourceAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
