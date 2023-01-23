#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleGroundNavigation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleGroundNavigation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleGroundNavigation_DEFINED)
#include <Modloader/app/structs/SimpleGroundNavigation__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleGroundNavigation__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleGroundNavigation_DEFINED
struct SimpleGroundNavigation__Class;
struct SimpleGroundNavigation {
    struct SimpleGroundNavigation__Class* klass;
    MonitorData* monitor;
    struct SimpleGroundNavigation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleGroundNavigation_FWDDECL)
#define IL2CPP_STRUCT_SimpleGroundNavigation_FWDDECL
#include <Modloader/app/structs/SimpleGroundNavigation__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleGroundNavigation_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleGroundNavigation_DEFINED) && !defined(IL2CPP_STRUCT_SimpleGroundNavigation_FWDDECL)
#include <Modloader/app/structs/SimpleGroundNavigation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleGroundNavigation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
