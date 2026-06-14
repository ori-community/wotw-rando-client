#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptionalAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptionalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalAttribute_DEFINED)
#define IL2CPP_STRUCT_OptionalAttribute_DEFINED
struct OptionalAttribute__Class;
struct OptionalAttribute {
    struct OptionalAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_OptionalAttribute_FWDDECL)
#define IL2CPP_STRUCT_OptionalAttribute_FWDDECL
#include <Modloader/app/structs/OptionalAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_OptionalAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptionalAttribute_DEFINED) && !defined(IL2CPP_STRUCT_OptionalAttribute_FWDDECL)
#include <Modloader/app/structs/OptionalAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptionalAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
