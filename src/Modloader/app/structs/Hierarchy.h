#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Hierarchy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Hierarchy_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hierarchy_DEFINED)
#define IL2CPP_STRUCT_Hierarchy_DEFINED
struct Hierarchy__Class;
struct Hierarchy {
    struct Hierarchy__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Hierarchy_FWDDECL)
#define IL2CPP_STRUCT_Hierarchy_FWDDECL
#include <Modloader/app/structs/Hierarchy__Class.h>
#endif
#undef IL2CPP_STRUCT_Hierarchy_INITIALIZING
#if !defined(IL2CPP_STRUCT_Hierarchy_DEFINED) && !defined(IL2CPP_STRUCT_Hierarchy_FWDDECL)
#include <Modloader/app/structs/Hierarchy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Hierarchy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
