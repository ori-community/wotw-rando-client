#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebConnectionGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebConnectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionGroup_DEFINED)
#include <Modloader/app/structs/WebConnectionGroup__Fields.h>
#if defined(IL2CPP_STRUCT_WebConnectionGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_WebConnectionGroup_DEFINED
struct WebConnectionGroup__Class;
struct WebConnectionGroup {
    struct WebConnectionGroup__Class* klass;
    MonitorData* monitor;
    struct WebConnectionGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WebConnectionGroup_FWDDECL)
#define IL2CPP_STRUCT_WebConnectionGroup_FWDDECL
#include <Modloader/app/structs/WebConnectionGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_WebConnectionGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebConnectionGroup_DEFINED) && !defined(IL2CPP_STRUCT_WebConnectionGroup_FWDDECL)
#include <Modloader/app/structs/WebConnectionGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebConnectionGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
