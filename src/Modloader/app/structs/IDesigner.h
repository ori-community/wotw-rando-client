#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDesigner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDesigner_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDesigner_DEFINED)
#define IL2CPP_STRUCT_IDesigner_DEFINED
struct IDesigner__Class;
struct IDesigner {
    struct IDesigner__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDesigner_FWDDECL)
#define IL2CPP_STRUCT_IDesigner_FWDDECL
#include <Modloader/app/structs/IDesigner__Class.h>
#endif
#undef IL2CPP_STRUCT_IDesigner_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDesigner_DEFINED) && !defined(IL2CPP_STRUCT_IDesigner_FWDDECL)
#include <Modloader/app/structs/IDesigner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDesigner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
