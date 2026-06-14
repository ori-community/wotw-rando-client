#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlResolver_DEFINED)
#define IL2CPP_STRUCT_XmlResolver_DEFINED
struct XmlResolver__Class;
struct XmlResolver {
    struct XmlResolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlResolver_FWDDECL)
#define IL2CPP_STRUCT_XmlResolver_FWDDECL
#include <Modloader/app/structs/XmlResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlResolver_DEFINED) && !defined(IL2CPP_STRUCT_XmlResolver_FWDDECL)
#include <Modloader/app/structs/XmlResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
