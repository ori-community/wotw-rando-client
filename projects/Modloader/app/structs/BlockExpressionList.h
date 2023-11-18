#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockExpressionList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockExpressionList_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockExpressionList_DEFINED)
#include <Modloader/app/structs/BlockExpressionList__Fields.h>
#if defined(IL2CPP_STRUCT_BlockExpressionList__Fields_DEFINED)
#define IL2CPP_STRUCT_BlockExpressionList_DEFINED
struct BlockExpressionList__Class;
struct BlockExpressionList {
    struct BlockExpressionList__Class* klass;
    MonitorData* monitor;
    struct BlockExpressionList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlockExpressionList_FWDDECL)
#define IL2CPP_STRUCT_BlockExpressionList_FWDDECL
#include <Modloader/app/structs/BlockExpressionList__Class.h>
#endif
#undef IL2CPP_STRUCT_BlockExpressionList_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockExpressionList_DEFINED) && !defined(IL2CPP_STRUCT_BlockExpressionList_FWDDECL)
#include <Modloader/app/structs/BlockExpressionList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockExpressionList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
