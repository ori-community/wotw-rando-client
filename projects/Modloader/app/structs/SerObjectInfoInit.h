#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerObjectInfoInit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerObjectInfoInit_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerObjectInfoInit_DEFINED)
#include <Modloader/app/structs/SerObjectInfoInit__Fields.h>
#if defined(IL2CPP_STRUCT_SerObjectInfoInit__Fields_DEFINED)
#define IL2CPP_STRUCT_SerObjectInfoInit_DEFINED
struct SerObjectInfoInit__Class;
struct SerObjectInfoInit {
    struct SerObjectInfoInit__Class* klass;
    MonitorData* monitor;
    struct SerObjectInfoInit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SerObjectInfoInit_FWDDECL)
#define IL2CPP_STRUCT_SerObjectInfoInit_FWDDECL
#include <Modloader/app/structs/SerObjectInfoInit__Class.h>
#endif
#undef IL2CPP_STRUCT_SerObjectInfoInit_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerObjectInfoInit_DEFINED) && !defined(IL2CPP_STRUCT_SerObjectInfoInit_FWDDECL)
#include <Modloader/app/structs/SerObjectInfoInit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerObjectInfoInit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
