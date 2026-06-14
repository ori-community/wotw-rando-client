#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalDataStoreSlot__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalDataStoreSlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreSlot__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalDataStoreSlot__Fields_DEFINED
struct LocalDataStoreMgr;
struct __declspec(align(8)) LocalDataStoreSlot__Fields {
    struct LocalDataStoreMgr* m_mgr;
    int32_t m_slot;
    int64_t m_cookie;
};
#endif
#if !defined(IL2CPP_STRUCT_LocalDataStoreSlot__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocalDataStoreSlot__Fields_FWDDECL
#include <Modloader/app/structs/LocalDataStoreMgr.h>
#endif
#undef IL2CPP_STRUCT_LocalDataStoreSlot__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalDataStoreSlot__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocalDataStoreSlot__Fields_FWDDECL)
#include <Modloader/app/structs/LocalDataStoreSlot__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalDataStoreSlot__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
