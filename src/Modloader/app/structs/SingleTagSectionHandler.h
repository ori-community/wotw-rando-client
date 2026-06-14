#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SingleTagSectionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SingleTagSectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleTagSectionHandler_DEFINED)
#define IL2CPP_STRUCT_SingleTagSectionHandler_DEFINED
struct SingleTagSectionHandler__Class;
struct SingleTagSectionHandler {
    struct SingleTagSectionHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SingleTagSectionHandler_FWDDECL)
#define IL2CPP_STRUCT_SingleTagSectionHandler_FWDDECL
#include <Modloader/app/structs/SingleTagSectionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SingleTagSectionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SingleTagSectionHandler_DEFINED) && !defined(IL2CPP_STRUCT_SingleTagSectionHandler_FWDDECL)
#include <Modloader/app/structs/SingleTagSectionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SingleTagSectionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
