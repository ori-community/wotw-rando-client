#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebRequestModulesSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebRequestModulesSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequestModulesSection_DEFINED)
#define IL2CPP_STRUCT_WebRequestModulesSection_DEFINED
struct WebRequestModulesSection__Class;
struct WebRequestModulesSection {
    struct WebRequestModulesSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WebRequestModulesSection_FWDDECL)
#define IL2CPP_STRUCT_WebRequestModulesSection_FWDDECL
#include <Modloader/app/structs/WebRequestModulesSection__Class.h>
#endif
#undef IL2CPP_STRUCT_WebRequestModulesSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebRequestModulesSection_DEFINED) && !defined(IL2CPP_STRUCT_WebRequestModulesSection_FWDDECL)
#include <Modloader/app/structs/WebRequestModulesSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebRequestModulesSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
