#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InheritanceAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InheritanceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InheritanceAttribute_DEFINED)
#include <Modloader/app/structs/InheritanceAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_InheritanceAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_InheritanceAttribute_DEFINED
struct InheritanceAttribute__Class;
struct InheritanceAttribute {
    struct InheritanceAttribute__Class* klass;
    MonitorData* monitor;
    struct InheritanceAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InheritanceAttribute_FWDDECL)
#define IL2CPP_STRUCT_InheritanceAttribute_FWDDECL
#include <Modloader/app/structs/InheritanceAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_InheritanceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_InheritanceAttribute_DEFINED) && !defined(IL2CPP_STRUCT_InheritanceAttribute_FWDDECL)
#include <Modloader/app/structs/InheritanceAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InheritanceAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
