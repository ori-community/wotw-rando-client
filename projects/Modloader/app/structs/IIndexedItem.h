#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IIndexedItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IIndexedItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IIndexedItem_DEFINED)
#define IL2CPP_STRUCT_IIndexedItem_DEFINED
struct IIndexedItem__Class;
struct IIndexedItem {
    struct IIndexedItem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IIndexedItem_FWDDECL)
#define IL2CPP_STRUCT_IIndexedItem_FWDDECL
#include <Modloader/app/structs/IIndexedItem__Class.h>
#endif
#undef IL2CPP_STRUCT_IIndexedItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IIndexedItem_DEFINED) && !defined(IL2CPP_STRUCT_IIndexedItem_FWDDECL)
#include <Modloader/app/structs/IIndexedItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IIndexedItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
