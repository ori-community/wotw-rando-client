#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoList_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoList_DEFINED)
#include <Modloader/app/structs/DemoList__Fields.h>
#if defined(IL2CPP_STRUCT_DemoList__Fields_DEFINED)
#define IL2CPP_STRUCT_DemoList_DEFINED
struct DemoList__Class;
struct DemoList {
    struct DemoList__Class* klass;
    MonitorData* monitor;
    struct DemoList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DemoList_FWDDECL)
#define IL2CPP_STRUCT_DemoList_FWDDECL
#include <Modloader/app/structs/DemoList__Class.h>
#endif
#undef IL2CPP_STRUCT_DemoList_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoList_DEFINED) && !defined(IL2CPP_STRUCT_DemoList_FWDDECL)
#include <Modloader/app/structs/DemoList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
