#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameValueSectionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameValueSectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueSectionHandler_DEFINED)
#define IL2CPP_STRUCT_NameValueSectionHandler_DEFINED
struct NameValueSectionHandler__Class;
struct NameValueSectionHandler {
    struct NameValueSectionHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NameValueSectionHandler_FWDDECL)
#define IL2CPP_STRUCT_NameValueSectionHandler_FWDDECL
#include <Modloader/app/structs/NameValueSectionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_NameValueSectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueSectionHandler_DEFINED) && !defined(IL2CPP_STRUCT_NameValueSectionHandler_FWDDECL)
#include <Modloader/app/structs/NameValueSectionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameValueSectionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
