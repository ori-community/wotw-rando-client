#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCIconsCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCIconsCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCIconsCollection_DEFINED)
#include <Modloader/app/structs/NPCIconsCollection__Fields.h>
#if defined(IL2CPP_STRUCT_NPCIconsCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCIconsCollection_DEFINED
struct NPCIconsCollection__Class;
struct NPCIconsCollection {
    struct NPCIconsCollection__Class* klass;
    MonitorData* monitor;
    struct NPCIconsCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCIconsCollection_FWDDECL)
#define IL2CPP_STRUCT_NPCIconsCollection_FWDDECL
#include <Modloader/app/structs/NPCIconsCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCIconsCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCIconsCollection_DEFINED) && !defined(IL2CPP_STRUCT_NPCIconsCollection_FWDDECL)
#include <Modloader/app/structs/NPCIconsCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCIconsCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
