#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509StoreManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509StoreManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509StoreManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_X509StoreManager__StaticFields_DEFINED
struct String;
struct X509Stores;
struct X509StoreManager__StaticFields {
    struct String* _userPath;
    struct String* _localMachinePath;
    struct String* _newUserPath;
    struct String* _newLocalMachinePath;
    struct X509Stores* _userStore;
    struct X509Stores* _machineStore;
    struct X509Stores* _newUserStore;
    struct X509Stores* _newMachineStore;
};
#endif
#if !defined(IL2CPP_STRUCT_X509StoreManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_X509StoreManager__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X509Stores.h>
#endif
#undef IL2CPP_STRUCT_X509StoreManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509StoreManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_X509StoreManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/X509StoreManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509StoreManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
