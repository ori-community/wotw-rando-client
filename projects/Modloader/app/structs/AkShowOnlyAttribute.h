#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkShowOnlyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkShowOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkShowOnlyAttribute_DEFINED)
#define IL2CPP_STRUCT_AkShowOnlyAttribute_DEFINED
struct AkShowOnlyAttribute__Class;
struct AkShowOnlyAttribute {
    struct AkShowOnlyAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AkShowOnlyAttribute_FWDDECL)
#define IL2CPP_STRUCT_AkShowOnlyAttribute_FWDDECL
#include <Modloader/app/structs/AkShowOnlyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AkShowOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkShowOnlyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AkShowOnlyAttribute_FWDDECL)
#include <Modloader/app/structs/AkShowOnlyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkShowOnlyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
