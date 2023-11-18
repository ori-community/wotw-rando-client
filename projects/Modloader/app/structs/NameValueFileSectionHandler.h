#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameValueFileSectionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameValueFileSectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueFileSectionHandler_DEFINED)
#define IL2CPP_STRUCT_NameValueFileSectionHandler_DEFINED
struct NameValueFileSectionHandler__Class;
struct NameValueFileSectionHandler {
    struct NameValueFileSectionHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NameValueFileSectionHandler_FWDDECL)
#define IL2CPP_STRUCT_NameValueFileSectionHandler_FWDDECL
#include <Modloader/app/structs/NameValueFileSectionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_NameValueFileSectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameValueFileSectionHandler_DEFINED) && !defined(IL2CPP_STRUCT_NameValueFileSectionHandler_FWDDECL)
#include <Modloader/app/structs/NameValueFileSectionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameValueFileSectionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
