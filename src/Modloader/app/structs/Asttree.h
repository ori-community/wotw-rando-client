#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Asttree_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Asttree_INITIALIZING
#if !defined(IL2CPP_STRUCT_Asttree_DEFINED)
#include <Modloader/app/structs/Asttree__Fields.h>
#if defined(IL2CPP_STRUCT_Asttree__Fields_DEFINED)
#define IL2CPP_STRUCT_Asttree_DEFINED
struct Asttree__Class;
struct Asttree {
    struct Asttree__Class* klass;
    MonitorData* monitor;
    struct Asttree__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Asttree_FWDDECL)
#define IL2CPP_STRUCT_Asttree_FWDDECL
#include <Modloader/app/structs/Asttree__Class.h>
#endif
#undef IL2CPP_STRUCT_Asttree_INITIALIZING
#if !defined(IL2CPP_STRUCT_Asttree_DEFINED) && !defined(IL2CPP_STRUCT_Asttree_FWDDECL)
#include <Modloader/app/structs/Asttree.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Asttree.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
