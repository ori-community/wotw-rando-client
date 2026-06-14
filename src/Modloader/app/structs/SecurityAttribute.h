#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityAttribute_DEFINED)
#include <Modloader/app/structs/SecurityAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SecurityAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SecurityAttribute_DEFINED
struct SecurityAttribute__Class;
struct SecurityAttribute {
    struct SecurityAttribute__Class* klass;
    MonitorData* monitor;
    struct SecurityAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityAttribute_FWDDECL)
#define IL2CPP_STRUCT_SecurityAttribute_FWDDECL
#include <Modloader/app/structs/SecurityAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SecurityAttribute_FWDDECL)
#include <Modloader/app/structs/SecurityAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
