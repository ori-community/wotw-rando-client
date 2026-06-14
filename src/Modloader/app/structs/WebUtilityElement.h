#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebUtilityElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebUtilityElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtilityElement_DEFINED)
#define IL2CPP_STRUCT_WebUtilityElement_DEFINED
struct WebUtilityElement__Class;
struct WebUtilityElement {
    struct WebUtilityElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WebUtilityElement_FWDDECL)
#define IL2CPP_STRUCT_WebUtilityElement_FWDDECL
#include <Modloader/app/structs/WebUtilityElement__Class.h>
#endif
#undef IL2CPP_STRUCT_WebUtilityElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebUtilityElement_DEFINED) && !defined(IL2CPP_STRUCT_WebUtilityElement_FWDDECL)
#include <Modloader/app/structs/WebUtilityElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebUtilityElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
