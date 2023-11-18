#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INestedSite_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INestedSite_INITIALIZING
#if !defined(IL2CPP_STRUCT_INestedSite_DEFINED)
#define IL2CPP_STRUCT_INestedSite_DEFINED
struct INestedSite__Class;
struct INestedSite {
    struct INestedSite__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INestedSite_FWDDECL)
#define IL2CPP_STRUCT_INestedSite_FWDDECL
#include <Modloader/app/structs/INestedSite__Class.h>
#endif
#undef IL2CPP_STRUCT_INestedSite_INITIALIZING
#if !defined(IL2CPP_STRUCT_INestedSite_DEFINED) && !defined(IL2CPP_STRUCT_INestedSite_FWDDECL)
#include <Modloader/app/structs/INestedSite.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INestedSite.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
