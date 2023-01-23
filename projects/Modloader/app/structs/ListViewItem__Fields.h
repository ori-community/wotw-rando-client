#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListViewItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListViewItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListViewItem__Fields_DEFINED)
#define IL2CPP_STRUCT_ListViewItem__Fields_DEFINED
struct ListView;
struct String;
struct __declspec(align(8)) ListViewItem__Fields {
    struct ListView* m_parentView;
    struct String* m_name;
    bool m_selected;
    int32_t m_controlId;
};
#endif
#if !defined(IL2CPP_STRUCT_ListViewItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_ListViewItem__Fields_FWDDECL
#include <Modloader/app/structs/ListView.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ListViewItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListViewItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ListViewItem__Fields_FWDDECL)
#include <Modloader/app/structs/ListViewItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListViewItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
