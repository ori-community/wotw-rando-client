#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomAttributeNamedArgument__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomAttributeNamedArgument__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeNamedArgument__Boxed_DEFINED)
#include <Modloader/app/structs/CustomAttributeNamedArgument.h>
#if defined(IL2CPP_STRUCT_CustomAttributeNamedArgument_DEFINED)
#define IL2CPP_STRUCT_CustomAttributeNamedArgument__Boxed_DEFINED
struct CustomAttributeNamedArgument__Class;
struct CustomAttributeNamedArgument__Boxed {
    struct CustomAttributeNamedArgument__Class* klass;
    MonitorData* monitor;
    struct CustomAttributeNamedArgument fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomAttributeNamedArgument__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CustomAttributeNamedArgument__Boxed_FWDDECL
#include <Modloader/app/structs/CustomAttributeNamedArgument__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomAttributeNamedArgument__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeNamedArgument__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CustomAttributeNamedArgument__Boxed_FWDDECL)
#include <Modloader/app/structs/CustomAttributeNamedArgument__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomAttributeNamedArgument__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
