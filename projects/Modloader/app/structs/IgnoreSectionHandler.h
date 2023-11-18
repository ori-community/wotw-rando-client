#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreSectionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreSectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreSectionHandler_DEFINED)
#define IL2CPP_STRUCT_IgnoreSectionHandler_DEFINED
struct IgnoreSectionHandler__Class;
struct IgnoreSectionHandler {
    struct IgnoreSectionHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IgnoreSectionHandler_FWDDECL)
#define IL2CPP_STRUCT_IgnoreSectionHandler_FWDDECL
#include <Modloader/app/structs/IgnoreSectionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IgnoreSectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreSectionHandler_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreSectionHandler_FWDDECL)
#include <Modloader/app/structs/IgnoreSectionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreSectionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
