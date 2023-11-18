#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathWispsManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathWispsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathWispsManager_DEFINED)
#include <Modloader/app/structs/DeathWispsManager__Fields.h>
#if defined(IL2CPP_STRUCT_DeathWispsManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DeathWispsManager_DEFINED
struct DeathWispsManager__Class;
struct DeathWispsManager {
    struct DeathWispsManager__Class* klass;
    MonitorData* monitor;
    struct DeathWispsManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathWispsManager_FWDDECL)
#define IL2CPP_STRUCT_DeathWispsManager_FWDDECL
#include <Modloader/app/structs/DeathWispsManager__Class.h>
#endif
#undef IL2CPP_STRUCT_DeathWispsManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathWispsManager_DEFINED) && !defined(IL2CPP_STRUCT_DeathWispsManager_FWDDECL)
#include <Modloader/app/structs/DeathWispsManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathWispsManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
