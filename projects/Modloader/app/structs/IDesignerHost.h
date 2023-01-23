#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDesignerHost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDesignerHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDesignerHost_DEFINED)
#define IL2CPP_STRUCT_IDesignerHost_DEFINED
struct IDesignerHost__Class;
struct IDesignerHost {
    struct IDesignerHost__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDesignerHost_FWDDECL)
#define IL2CPP_STRUCT_IDesignerHost_FWDDECL
#include <Modloader/app/structs/IDesignerHost__Class.h>
#endif
#undef IL2CPP_STRUCT_IDesignerHost_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDesignerHost_DEFINED) && !defined(IL2CPP_STRUCT_IDesignerHost_FWDDECL)
#include <Modloader/app/structs/IDesignerHost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDesignerHost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
