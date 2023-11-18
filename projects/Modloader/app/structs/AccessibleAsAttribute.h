#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AccessibleAsAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AccessibleAsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AccessibleAsAttribute_DEFINED)
#include <Modloader/app/structs/AccessibleAsAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AccessibleAsAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AccessibleAsAttribute_DEFINED
struct AccessibleAsAttribute__Class;
struct AccessibleAsAttribute {
    struct AccessibleAsAttribute__Class* klass;
    MonitorData* monitor;
    struct AccessibleAsAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AccessibleAsAttribute_FWDDECL)
#define IL2CPP_STRUCT_AccessibleAsAttribute_FWDDECL
#include <Modloader/app/structs/AccessibleAsAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AccessibleAsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AccessibleAsAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AccessibleAsAttribute_FWDDECL)
#include <Modloader/app/structs/AccessibleAsAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AccessibleAsAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
