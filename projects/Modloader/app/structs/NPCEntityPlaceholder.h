#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCEntityPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCEntityPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntityPlaceholder_DEFINED)
#include <Modloader/app/structs/NPCEntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCEntityPlaceholder_DEFINED
struct NPCEntityPlaceholder__Class;
struct NPCEntityPlaceholder {
    struct NPCEntityPlaceholder__Class* klass;
    MonitorData* monitor;
    struct NPCEntityPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCEntityPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_NPCEntityPlaceholder_FWDDECL
#include <Modloader/app/structs/NPCEntityPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCEntityPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCEntityPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_NPCEntityPlaceholder_FWDDECL)
#include <Modloader/app/structs/NPCEntityPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCEntityPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
