#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RBTree_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RBTree_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RBTree_1_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/TreeAccessMethod__Enum.h>
#if defined(IL2CPP_STRUCT_TreeAccessMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_RBTree_1_System_Object___Fields_DEFINED
struct RBTree_1_K_TreePage_System_Object___Array;
struct Int32__Array;
struct __declspec(align(8)) RBTree_1_System_Object___Fields {
    struct RBTree_1_K_TreePage_System_Object___Array* _pageTable;
    struct Int32__Array* _pageTableMap;
    int32_t _inUsePageCount;
    int32_t _nextFreePageLine;
    int32_t root;
    int32_t _version;
    int32_t _inUseNodeCount;
    int32_t _inUseSatelliteTreeCount;
    TreeAccessMethod__Enum _accessMethod;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RBTree_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_RBTree_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/RBTree_1_K_TreePage_System_Object___Array.h>
#endif
#undef IL2CPP_STRUCT_RBTree_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RBTree_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_RBTree_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/RBTree_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RBTree_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
