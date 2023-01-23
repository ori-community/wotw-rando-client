#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNodeRef__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNodeRef__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeRef__Array_DEFINED)
#include <Modloader/app/structs/XPathNodeRef.h>
#if defined(IL2CPP_STRUCT_XPathNodeRef_DEFINED)
#define IL2CPP_STRUCT_XPathNodeRef__Array_DEFINED
struct XPathNodeRef__Array__Class;
struct XPathNodeRef__Array {
    struct XPathNodeRef__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct XPathNodeRef vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XPathNodeRef__Array_FWDDECL)
#define IL2CPP_STRUCT_XPathNodeRef__Array_FWDDECL
#include <Modloader/app/structs/XPathNodeRef__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_XPathNodeRef__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeRef__Array_DEFINED) && !defined(IL2CPP_STRUCT_XPathNodeRef__Array_FWDDECL)
#include <Modloader/app/structs/XPathNodeRef__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNodeRef__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
