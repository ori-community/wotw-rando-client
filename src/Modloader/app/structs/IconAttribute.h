#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IconAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IconAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IconAttribute_DEFINED)
#include <Modloader/app/structs/IconAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_IconAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_IconAttribute_DEFINED
struct IconAttribute__Class;
struct IconAttribute {
    struct IconAttribute__Class* klass;
    MonitorData* monitor;
    struct IconAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IconAttribute_FWDDECL)
#define IL2CPP_STRUCT_IconAttribute_FWDDECL
#include <Modloader/app/structs/IconAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_IconAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_IconAttribute_DEFINED) && !defined(IL2CPP_STRUCT_IconAttribute_FWDDECL)
#include <Modloader/app/structs/IconAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IconAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
