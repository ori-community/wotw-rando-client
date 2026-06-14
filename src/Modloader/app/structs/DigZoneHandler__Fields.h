#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigZoneHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigZoneHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigZoneHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DigZoneHandler__Fields_DEFINED
struct Collider__Array;
struct HashSet_1_DigZone_;
struct DigZoneHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct Collider__Array* IgnoreColliders;
    struct HashSet_1_DigZone_* m_ignoredZones;
    bool m_passThrough;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DigZoneHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_DigZoneHandler__Fields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/HashSet_1_DigZone_.h>
#endif
#undef IL2CPP_STRUCT_DigZoneHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigZoneHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DigZoneHandler__Fields_FWDDECL)
#include <Modloader/app/structs/DigZoneHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigZoneHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
