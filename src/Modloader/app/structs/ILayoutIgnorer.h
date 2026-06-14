#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILayoutIgnorer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILayoutIgnorer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutIgnorer_DEFINED)
#define IL2CPP_STRUCT_ILayoutIgnorer_DEFINED
struct ILayoutIgnorer__Class;
struct ILayoutIgnorer {
    struct ILayoutIgnorer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILayoutIgnorer_FWDDECL)
#define IL2CPP_STRUCT_ILayoutIgnorer_FWDDECL
#include <Modloader/app/structs/ILayoutIgnorer__Class.h>
#endif
#undef IL2CPP_STRUCT_ILayoutIgnorer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutIgnorer_DEFINED) && !defined(IL2CPP_STRUCT_ILayoutIgnorer_FWDDECL)
#include <Modloader/app/structs/ILayoutIgnorer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILayoutIgnorer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
