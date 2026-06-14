#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossesNamesMessages_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossesNamesMessages_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossesNamesMessages_DEFINED)
#include <Modloader/app/structs/BossesNamesMessages__Fields.h>
#if defined(IL2CPP_STRUCT_BossesNamesMessages__Fields_DEFINED)
#define IL2CPP_STRUCT_BossesNamesMessages_DEFINED
struct BossesNamesMessages__Class;
struct BossesNamesMessages {
    struct BossesNamesMessages__Class* klass;
    MonitorData* monitor;
    struct BossesNamesMessages__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossesNamesMessages_FWDDECL)
#define IL2CPP_STRUCT_BossesNamesMessages_FWDDECL
#include <Modloader/app/structs/BossesNamesMessages__Class.h>
#endif
#undef IL2CPP_STRUCT_BossesNamesMessages_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossesNamesMessages_DEFINED) && !defined(IL2CPP_STRUCT_BossesNamesMessages_FWDDECL)
#include <Modloader/app/structs/BossesNamesMessages.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossesNamesMessages.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
