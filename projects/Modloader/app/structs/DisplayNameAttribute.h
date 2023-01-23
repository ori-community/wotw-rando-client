#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisplayNameAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisplayNameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplayNameAttribute_DEFINED)
#include <Modloader/app/structs/DisplayNameAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DisplayNameAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DisplayNameAttribute_DEFINED
struct DisplayNameAttribute__Class;
struct DisplayNameAttribute {
    struct DisplayNameAttribute__Class* klass;
    MonitorData* monitor;
    struct DisplayNameAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisplayNameAttribute_FWDDECL)
#define IL2CPP_STRUCT_DisplayNameAttribute_FWDDECL
#include <Modloader/app/structs/DisplayNameAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DisplayNameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplayNameAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DisplayNameAttribute_FWDDECL)
#include <Modloader/app/structs/DisplayNameAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisplayNameAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
