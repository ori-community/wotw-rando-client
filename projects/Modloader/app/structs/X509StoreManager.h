#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509StoreManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509StoreManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509StoreManager_DEFINED)
#define IL2CPP_STRUCT_X509StoreManager_DEFINED
struct X509StoreManager__Class;
struct X509StoreManager {
    struct X509StoreManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_X509StoreManager_FWDDECL)
#define IL2CPP_STRUCT_X509StoreManager_FWDDECL
#include <Modloader/app/structs/X509StoreManager__Class.h>
#endif
#undef IL2CPP_STRUCT_X509StoreManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509StoreManager_DEFINED) && !defined(IL2CPP_STRUCT_X509StoreManager_FWDDECL)
#include <Modloader/app/structs/X509StoreManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509StoreManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
