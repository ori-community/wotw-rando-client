#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Group_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Group_INITIALIZING
#if !defined(IL2CPP_STRUCT_Group_DEFINED)
#include <Modloader/app/structs/Group__Fields.h>
#if defined(IL2CPP_STRUCT_Group__Fields_DEFINED)
#define IL2CPP_STRUCT_Group_DEFINED
struct Group__Class;
struct Group {
    struct Group__Class* klass;
    MonitorData* monitor;
    struct Group__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Group_FWDDECL)
#define IL2CPP_STRUCT_Group_FWDDECL
#include <Modloader/app/structs/Group__Class.h>
#endif
#undef IL2CPP_STRUCT_Group_INITIALIZING
#if !defined(IL2CPP_STRUCT_Group_DEFINED) && !defined(IL2CPP_STRUCT_Group_FWDDECL)
#include <Modloader/app/structs/Group.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Group.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
