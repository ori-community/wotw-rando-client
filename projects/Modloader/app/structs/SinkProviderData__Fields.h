#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SinkProviderData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SinkProviderData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinkProviderData__Fields_DEFINED)
#define IL2CPP_STRUCT_SinkProviderData__Fields_DEFINED
struct String;
struct ArrayList;
struct Hashtable;
struct __declspec(align(8)) SinkProviderData__Fields {
    struct String* sinkName;
    struct ArrayList* children;
    struct Hashtable* properties;
};
#endif
#if !defined(IL2CPP_STRUCT_SinkProviderData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SinkProviderData__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SinkProviderData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinkProviderData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SinkProviderData__Fields_FWDDECL)
#include <Modloader/app/structs/SinkProviderData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SinkProviderData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
