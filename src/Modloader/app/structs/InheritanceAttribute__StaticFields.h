#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InheritanceAttribute__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InheritanceAttribute__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InheritanceAttribute__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InheritanceAttribute__StaticFields_DEFINED
struct InheritanceAttribute;
struct InheritanceAttribute__StaticFields {
    struct InheritanceAttribute* Inherited;
    struct InheritanceAttribute* InheritedReadOnly;
    struct InheritanceAttribute* NotInherited;
    struct InheritanceAttribute* Default;
};
#endif
#if !defined(IL2CPP_STRUCT_InheritanceAttribute__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InheritanceAttribute__StaticFields_FWDDECL
#include <Modloader/app/structs/InheritanceAttribute.h>
#endif
#undef IL2CPP_STRUCT_InheritanceAttribute__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InheritanceAttribute__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InheritanceAttribute__StaticFields_FWDDECL)
#include <Modloader/app/structs/InheritanceAttribute__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InheritanceAttribute__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
