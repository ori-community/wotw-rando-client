#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkThreadProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkThreadProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkThreadProperties_DEFINED)
#include <Modloader/app/structs/AkThreadProperties__Fields.h>
#if defined(IL2CPP_STRUCT_AkThreadProperties__Fields_DEFINED)
#define IL2CPP_STRUCT_AkThreadProperties_DEFINED
struct AkThreadProperties__Class;
struct AkThreadProperties {
    struct AkThreadProperties__Class* klass;
    MonitorData* monitor;
    struct AkThreadProperties__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkThreadProperties_FWDDECL)
#define IL2CPP_STRUCT_AkThreadProperties_FWDDECL
#include <Modloader/app/structs/AkThreadProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_AkThreadProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkThreadProperties_DEFINED) && !defined(IL2CPP_STRUCT_AkThreadProperties_FWDDECL)
#include <Modloader/app/structs/AkThreadProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkThreadProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
