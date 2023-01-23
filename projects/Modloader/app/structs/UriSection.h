#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriSection_DEFINED)
#define IL2CPP_STRUCT_UriSection_DEFINED
struct UriSection__Class;
struct UriSection {
    struct UriSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UriSection_FWDDECL)
#define IL2CPP_STRUCT_UriSection_FWDDECL
#include <Modloader/app/structs/UriSection__Class.h>
#endif
#undef IL2CPP_STRUCT_UriSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriSection_DEFINED) && !defined(IL2CPP_STRUCT_UriSection_FWDDECL)
#include <Modloader/app/structs/UriSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
