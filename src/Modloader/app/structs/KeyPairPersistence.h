#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyPairPersistence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyPairPersistence_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyPairPersistence_DEFINED)
#include <Modloader/app/structs/KeyPairPersistence__Fields.h>
#if defined(IL2CPP_STRUCT_KeyPairPersistence__Fields_DEFINED)
#define IL2CPP_STRUCT_KeyPairPersistence_DEFINED
struct KeyPairPersistence__Class;
struct KeyPairPersistence {
    struct KeyPairPersistence__Class* klass;
    MonitorData* monitor;
    struct KeyPairPersistence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeyPairPersistence_FWDDECL)
#define IL2CPP_STRUCT_KeyPairPersistence_FWDDECL
#include <Modloader/app/structs/KeyPairPersistence__Class.h>
#endif
#undef IL2CPP_STRUCT_KeyPairPersistence_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyPairPersistence_DEFINED) && !defined(IL2CPP_STRUCT_KeyPairPersistence_FWDDECL)
#include <Modloader/app/structs/KeyPairPersistence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyPairPersistence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
