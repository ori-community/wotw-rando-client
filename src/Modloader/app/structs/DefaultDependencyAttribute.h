#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultDependencyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultDependencyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultDependencyAttribute_DEFINED)
#include <Modloader/app/structs/DefaultDependencyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultDependencyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultDependencyAttribute_DEFINED
struct DefaultDependencyAttribute__Class;
struct DefaultDependencyAttribute {
    struct DefaultDependencyAttribute__Class* klass;
    MonitorData* monitor;
    struct DefaultDependencyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultDependencyAttribute_FWDDECL)
#define IL2CPP_STRUCT_DefaultDependencyAttribute_FWDDECL
#include <Modloader/app/structs/DefaultDependencyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultDependencyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultDependencyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DefaultDependencyAttribute_FWDDECL)
#include <Modloader/app/structs/DefaultDependencyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultDependencyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
