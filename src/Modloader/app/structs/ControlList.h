#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControlList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControlList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlList_DEFINED)
#include <Modloader/app/structs/ControlList__Fields.h>
#if defined(IL2CPP_STRUCT_ControlList__Fields_DEFINED)
#define IL2CPP_STRUCT_ControlList_DEFINED
struct ControlList__Class;
struct ControlList {
    struct ControlList__Class* klass;
    MonitorData* monitor;
    struct ControlList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControlList_FWDDECL)
#define IL2CPP_STRUCT_ControlList_FWDDECL
#include <Modloader/app/structs/ControlList__Class.h>
#endif
#undef IL2CPP_STRUCT_ControlList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControlList_DEFINED) && !defined(IL2CPP_STRUCT_ControlList_FWDDECL)
#include <Modloader/app/structs/ControlList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControlList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
