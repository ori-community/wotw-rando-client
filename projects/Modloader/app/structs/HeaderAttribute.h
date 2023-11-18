#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeaderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeaderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderAttribute_DEFINED)
#include <Modloader/app/structs/HeaderAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_HeaderAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_HeaderAttribute_DEFINED
struct HeaderAttribute__Class;
struct HeaderAttribute {
    struct HeaderAttribute__Class* klass;
    MonitorData* monitor;
    struct HeaderAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeaderAttribute_FWDDECL)
#define IL2CPP_STRUCT_HeaderAttribute_FWDDECL
#include <Modloader/app/structs/HeaderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_HeaderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_HeaderAttribute_FWDDECL)
#include <Modloader/app/structs/HeaderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeaderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
