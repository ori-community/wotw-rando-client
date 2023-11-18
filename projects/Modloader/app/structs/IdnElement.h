#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IdnElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IdnElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdnElement_DEFINED)
#define IL2CPP_STRUCT_IdnElement_DEFINED
struct IdnElement__Class;
struct IdnElement {
    struct IdnElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IdnElement_FWDDECL)
#define IL2CPP_STRUCT_IdnElement_FWDDECL
#include <Modloader/app/structs/IdnElement__Class.h>
#endif
#undef IL2CPP_STRUCT_IdnElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdnElement_DEFINED) && !defined(IL2CPP_STRUCT_IdnElement_FWDDECL)
#include <Modloader/app/structs/IdnElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IdnElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
