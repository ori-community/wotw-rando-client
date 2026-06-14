#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestoreHealthPickup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestoreHealthPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreHealthPickup__Fields_DEFINED)
#include <Modloader/app/structs/PickupBase__Fields.h>
#if defined(IL2CPP_STRUCT_PickupBase__Fields_DEFINED)
#define IL2CPP_STRUCT_RestoreHealthPickup__Fields_DEFINED
struct RestoreHealthPickup__Fields {
    struct PickupBase__Fields _;
    int32_t Amount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestoreHealthPickup__Fields_FWDDECL)
#define IL2CPP_STRUCT_RestoreHealthPickup__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RestoreHealthPickup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestoreHealthPickup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RestoreHealthPickup__Fields_FWDDECL)
#include <Modloader/app/structs/RestoreHealthPickup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestoreHealthPickup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
