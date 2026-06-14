#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IList_INITIALIZING
#if !defined(IL2CPP_STRUCT_IList_DEFINED)
#define IL2CPP_STRUCT_IList_DEFINED
struct IList__Class;
struct IList {
    struct IList__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IList_FWDDECL)
#define IL2CPP_STRUCT_IList_FWDDECL
#include <Modloader/app/structs/IList__Class.h>
#endif
#undef IL2CPP_STRUCT_IList_INITIALIZING
#if !defined(IL2CPP_STRUCT_IList_DEFINED) && !defined(IL2CPP_STRUCT_IList_FWDDECL)
#include <Modloader/app/structs/IList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
