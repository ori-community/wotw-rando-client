#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NodeGraphPathFinder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NodeGraphPathFinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeGraphPathFinder__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_NodeGraphPathFinder__Fields_DEFINED
struct Dictionary_2_Link_Link_;
struct Dictionary_2_Link_System_Single_;
struct SortedList_2_System_Single_Link_;
struct List_1_Link_;
struct NodeGraphPathFinder__Fields {
    struct MonoBehaviour__Fields _;
    struct Dictionary_2_Link_Link_* m_prev;
    struct Dictionary_2_Link_System_Single_* m_cost;
    struct SortedList_2_System_Single_Link_* m_open;
    struct List_1_Link_* m_path;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NodeGraphPathFinder__Fields_FWDDECL)
#define IL2CPP_STRUCT_NodeGraphPathFinder__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Link_Link_.h>
#include <Modloader/app/structs/Dictionary_2_Link_System_Single_.h>
#include <Modloader/app/structs/List_1_Link_.h>
#include <Modloader/app/structs/SortedList_2_System_Single_Link_.h>
#endif
#undef IL2CPP_STRUCT_NodeGraphPathFinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NodeGraphPathFinder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NodeGraphPathFinder__Fields_FWDDECL)
#include <Modloader/app/structs/NodeGraphPathFinder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NodeGraphPathFinder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
