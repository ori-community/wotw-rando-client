#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XContainer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_XContainer_DEFINED)
#include <Modloader/app/structs/XContainer__Fields.h>
#if defined(IL2CPP_STRUCT_XContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_XContainer_DEFINED
struct XContainer__Class;
struct XContainer {
    struct XContainer__Class* klass;
    MonitorData* monitor;
    struct XContainer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XContainer_FWDDECL)
#define IL2CPP_STRUCT_XContainer_FWDDECL
#include <Modloader/app/structs/XContainer__Class.h>
#endif
#undef IL2CPP_STRUCT_XContainer_INITIALIZING
#if !defined(IL2CPP_STRUCT_XContainer_DEFINED) && !defined(IL2CPP_STRUCT_XContainer_FWDDECL)
#include <Modloader/app/structs/XContainer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XContainer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
