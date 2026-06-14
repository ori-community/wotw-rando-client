#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEntityHighlight_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEntityHighlight_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityHighlight_DEFINED)
#define IL2CPP_STRUCT_IEntityHighlight_DEFINED
struct IEntityHighlight__Class;
struct IEntityHighlight {
    struct IEntityHighlight__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEntityHighlight_FWDDECL)
#define IL2CPP_STRUCT_IEntityHighlight_FWDDECL
#include <Modloader/app/structs/IEntityHighlight__Class.h>
#endif
#undef IL2CPP_STRUCT_IEntityHighlight_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityHighlight_DEFINED) && !defined(IL2CPP_STRUCT_IEntityHighlight_FWDDECL)
#include <Modloader/app/structs/IEntityHighlight.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEntityHighlight.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
