#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListViewItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListViewItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListViewItem_DEFINED)
#include <Modloader/app/structs/ListViewItem__Fields.h>
#if defined(IL2CPP_STRUCT_ListViewItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ListViewItem_DEFINED
struct ListViewItem__Class;
struct ListViewItem {
    struct ListViewItem__Class* klass;
    MonitorData* monitor;
    struct ListViewItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListViewItem_FWDDECL)
#define IL2CPP_STRUCT_ListViewItem_FWDDECL
#include <Modloader/app/structs/ListViewItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ListViewItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListViewItem_DEFINED) && !defined(IL2CPP_STRUCT_ListViewItem_FWDDECL)
#include <Modloader/app/structs/ListViewItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListViewItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
