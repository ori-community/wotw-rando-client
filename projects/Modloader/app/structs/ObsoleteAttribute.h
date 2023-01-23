#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObsoleteAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObsoleteAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObsoleteAttribute_DEFINED)
#include <Modloader/app/structs/ObsoleteAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ObsoleteAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ObsoleteAttribute_DEFINED
struct ObsoleteAttribute__Class;
struct ObsoleteAttribute {
    struct ObsoleteAttribute__Class* klass;
    MonitorData* monitor;
    struct ObsoleteAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObsoleteAttribute_FWDDECL)
#define IL2CPP_STRUCT_ObsoleteAttribute_FWDDECL
#include <Modloader/app/structs/ObsoleteAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ObsoleteAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObsoleteAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ObsoleteAttribute_FWDDECL)
#include <Modloader/app/structs/ObsoleteAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObsoleteAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
