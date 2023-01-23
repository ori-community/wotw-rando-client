#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberIDOwnerSO__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberIDOwnerSO__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberIDOwnerSO__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_UberIDOwnerSO__Fields_DEFINED
struct UberID;
struct String;
struct UberIDOwnerSO__Fields {
    struct ScriptableObject__Fields _;
    struct UberID* m_id;
    struct String* m_awakeName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberIDOwnerSO__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberIDOwnerSO__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberID.h>
#endif
#undef IL2CPP_STRUCT_UberIDOwnerSO__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberIDOwnerSO__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberIDOwnerSO__Fields_FWDDECL)
#include <Modloader/app/structs/UberIDOwnerSO__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberIDOwnerSO__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
