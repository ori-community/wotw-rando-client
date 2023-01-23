#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathList_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathList_DEFINED)
#include <Modloader/app/structs/PathList__Fields.h>
#if defined(IL2CPP_STRUCT_PathList__Fields_DEFINED)
#define IL2CPP_STRUCT_PathList_DEFINED
struct PathList__Class;
struct PathList {
    struct PathList__Class* klass;
    MonitorData* monitor;
    struct PathList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathList_FWDDECL)
#define IL2CPP_STRUCT_PathList_FWDDECL
#include <Modloader/app/structs/PathList__Class.h>
#endif
#undef IL2CPP_STRUCT_PathList_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathList_DEFINED) && !defined(IL2CPP_STRUCT_PathList_FWDDECL)
#include <Modloader/app/structs/PathList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
