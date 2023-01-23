#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NpcProjectItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NpcProjectItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_NpcProjectItem_DEFINED)
#include <Modloader/app/structs/NpcProjectItem__Fields.h>
#if defined(IL2CPP_STRUCT_NpcProjectItem__Fields_DEFINED)
#define IL2CPP_STRUCT_NpcProjectItem_DEFINED
struct NpcProjectItem__Class;
struct NpcProjectItem {
    struct NpcProjectItem__Class* klass;
    MonitorData* monitor;
    struct NpcProjectItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NpcProjectItem_FWDDECL)
#define IL2CPP_STRUCT_NpcProjectItem_FWDDECL
#include <Modloader/app/structs/NpcProjectItem__Class.h>
#endif
#undef IL2CPP_STRUCT_NpcProjectItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_NpcProjectItem_DEFINED) && !defined(IL2CPP_STRUCT_NpcProjectItem_FWDDECL)
#include <Modloader/app/structs/NpcProjectItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NpcProjectItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
