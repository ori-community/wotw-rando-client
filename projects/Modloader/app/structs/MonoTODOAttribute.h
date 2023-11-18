#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoTODOAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoTODOAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTODOAttribute_DEFINED)
#include <Modloader/app/structs/MonoTODOAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_MonoTODOAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoTODOAttribute_DEFINED
struct MonoTODOAttribute__Class;
struct MonoTODOAttribute {
    struct MonoTODOAttribute__Class* klass;
    MonitorData* monitor;
    struct MonoTODOAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoTODOAttribute_FWDDECL)
#define IL2CPP_STRUCT_MonoTODOAttribute_FWDDECL
#include <Modloader/app/structs/MonoTODOAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoTODOAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoTODOAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MonoTODOAttribute_FWDDECL)
#include <Modloader/app/structs/MonoTODOAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoTODOAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
