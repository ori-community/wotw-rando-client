#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberIDOwnerSO_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberIDOwnerSO_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberIDOwnerSO_DEFINED)
#include <Modloader/app/structs/UberIDOwnerSO__Fields.h>
#if defined(IL2CPP_STRUCT_UberIDOwnerSO__Fields_DEFINED)
#define IL2CPP_STRUCT_UberIDOwnerSO_DEFINED
struct UberIDOwnerSO__Class;
struct UberIDOwnerSO {
    struct UberIDOwnerSO__Class* klass;
    MonitorData* monitor;
    struct UberIDOwnerSO__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberIDOwnerSO_FWDDECL)
#define IL2CPP_STRUCT_UberIDOwnerSO_FWDDECL
#include <Modloader/app/structs/UberIDOwnerSO__Class.h>
#endif
#undef IL2CPP_STRUCT_UberIDOwnerSO_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberIDOwnerSO_DEFINED) && !defined(IL2CPP_STRUCT_UberIDOwnerSO_FWDDECL)
#include <Modloader/app/structs/UberIDOwnerSO.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberIDOwnerSO.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
