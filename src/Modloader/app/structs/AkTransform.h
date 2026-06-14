#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkTransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkTransform_DEFINED)
#include <Modloader/app/structs/AkTransform__Fields.h>
#if defined(IL2CPP_STRUCT_AkTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_AkTransform_DEFINED
struct AkTransform__Class;
struct AkTransform {
    struct AkTransform__Class* klass;
    MonitorData* monitor;
    struct AkTransform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkTransform_FWDDECL)
#define IL2CPP_STRUCT_AkTransform_FWDDECL
#include <Modloader/app/structs/AkTransform__Class.h>
#endif
#undef IL2CPP_STRUCT_AkTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkTransform_DEFINED) && !defined(IL2CPP_STRUCT_AkTransform_FWDDECL)
#include <Modloader/app/structs/AkTransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkTransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
