#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuidAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuidAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidAttribute_DEFINED)
#include <Modloader/app/structs/GuidAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_GuidAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_GuidAttribute_DEFINED
struct GuidAttribute__Class;
struct GuidAttribute {
    struct GuidAttribute__Class* klass;
    MonitorData* monitor;
    struct GuidAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuidAttribute_FWDDECL)
#define IL2CPP_STRUCT_GuidAttribute_FWDDECL
#include <Modloader/app/structs/GuidAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_GuidAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuidAttribute_DEFINED) && !defined(IL2CPP_STRUCT_GuidAttribute_FWDDECL)
#include <Modloader/app/structs/GuidAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuidAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
