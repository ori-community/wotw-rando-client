#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInsideZoneCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInsideZoneCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInsideZoneCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinInsideZoneCondition__Fields_DEFINED
struct Transform__Array;
struct SeinInsideZoneCondition__Fields {
    struct Condition_1__Fields _;
    struct Transform__Array* Zones;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInsideZoneCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinInsideZoneCondition__Fields_FWDDECL
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_SeinInsideZoneCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInsideZoneCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinInsideZoneCondition__Fields_FWDDECL)
#include <Modloader/app/structs/SeinInsideZoneCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInsideZoneCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
