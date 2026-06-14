#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LongList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LongList_INITIALIZING
#if !defined(IL2CPP_STRUCT_LongList_DEFINED)
#include <Modloader/app/structs/LongList__Fields.h>
#if defined(IL2CPP_STRUCT_LongList__Fields_DEFINED)
#define IL2CPP_STRUCT_LongList_DEFINED
struct LongList__Class;
struct LongList {
    struct LongList__Class* klass;
    MonitorData* monitor;
    struct LongList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LongList_FWDDECL)
#define IL2CPP_STRUCT_LongList_FWDDECL
#include <Modloader/app/structs/LongList__Class.h>
#endif
#undef IL2CPP_STRUCT_LongList_INITIALIZING
#if !defined(IL2CPP_STRUCT_LongList_DEFINED) && !defined(IL2CPP_STRUCT_LongList_FWDDECL)
#include <Modloader/app/structs/LongList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LongList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
