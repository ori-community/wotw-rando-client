#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BypassElementCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BypassElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_BypassElementCollection_DEFINED)
#define IL2CPP_STRUCT_BypassElementCollection_DEFINED
struct BypassElementCollection__Class;
struct BypassElementCollection {
    struct BypassElementCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BypassElementCollection_FWDDECL)
#define IL2CPP_STRUCT_BypassElementCollection_FWDDECL
#include <Modloader/app/structs/BypassElementCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_BypassElementCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_BypassElementCollection_DEFINED) && !defined(IL2CPP_STRUCT_BypassElementCollection_FWDDECL)
#include <Modloader/app/structs/BypassElementCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BypassElementCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
