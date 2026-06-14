#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRenderEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRenderEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRenderEntity_DEFINED)
#define IL2CPP_STRUCT_IRenderEntity_DEFINED
struct IRenderEntity__Class;
struct IRenderEntity {
    struct IRenderEntity__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRenderEntity_FWDDECL)
#define IL2CPP_STRUCT_IRenderEntity_FWDDECL
#include <Modloader/app/structs/IRenderEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_IRenderEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRenderEntity_DEFINED) && !defined(IL2CPP_STRUCT_IRenderEntity_FWDDECL)
#include <Modloader/app/structs/IRenderEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRenderEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
