#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LicenseManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LicenseManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_LicenseManager__StaticFields_DEFINED
struct Object;
struct LicenseContext;
struct Hashtable;
struct LicenseManager__StaticFields {
    struct Object* selfLock;
    struct LicenseContext* context;
    struct Object* contextLockHolder;
    struct Hashtable* providers;
    struct Hashtable* providerInstances;
    struct Object* internalSyncObject;
};
#endif
#if !defined(IL2CPP_STRUCT_LicenseManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LicenseManager__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/LicenseContext.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_LicenseManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LicenseManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LicenseManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/LicenseManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LicenseManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
