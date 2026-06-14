#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FreeFunctionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FreeFunctionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FreeFunctionAttribute_DEFINED)
#include <Modloader/app/structs/FreeFunctionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_FreeFunctionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_FreeFunctionAttribute_DEFINED
struct FreeFunctionAttribute__Class;
struct FreeFunctionAttribute {
    struct FreeFunctionAttribute__Class* klass;
    MonitorData* monitor;
    struct FreeFunctionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FreeFunctionAttribute_FWDDECL)
#define IL2CPP_STRUCT_FreeFunctionAttribute_FWDDECL
#include <Modloader/app/structs/FreeFunctionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_FreeFunctionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FreeFunctionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_FreeFunctionAttribute_FWDDECL)
#include <Modloader/app/structs/FreeFunctionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FreeFunctionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
