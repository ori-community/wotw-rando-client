#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathDataPoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathDataPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathDataPoint__Fields_DEFINED)
#include <Modloader/app/structs/DataPoint__Fields.h>
#if defined(IL2CPP_STRUCT_DataPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_DeathDataPoint__Fields_DEFINED
struct String;
struct DeathDataPoint__Fields {
    struct DataPoint__Fields _;
    float m_lastDamageTaken;
    struct String* m_killerName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathDataPoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeathDataPoint__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DeathDataPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathDataPoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeathDataPoint__Fields_FWDDECL)
#include <Modloader/app/structs/DeathDataPoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathDataPoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
