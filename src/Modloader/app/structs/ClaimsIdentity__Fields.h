#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClaimsIdentity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClaimsIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClaimsIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_ClaimsIdentity__Fields_DEFINED
struct Byte__Array;
struct List_1_System_Security_Claims_Claim_;
struct Collection_1_System_Collections_Generic_IEnumerable_1_;
struct String;
struct ClaimsIdentity;
struct Object;
struct __declspec(align(8)) ClaimsIdentity__Fields {
    struct Byte__Array* m_userSerializationData;
    struct List_1_System_Security_Claims_Claim_* m_instanceClaims;
    struct Collection_1_System_Collections_Generic_IEnumerable_1_* m_externalClaims;
    struct String* m_nameType;
    struct String* m_roleType;
    struct String* m_version;
    struct ClaimsIdentity* m_actor;
    struct String* m_authenticationType;
    struct Object* m_bootstrapContext;
    struct String* m_label;
    struct String* m_serializedNameType;
    struct String* m_serializedRoleType;
    struct String* m_serializedClaims;
};
#endif
#if !defined(IL2CPP_STRUCT_ClaimsIdentity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClaimsIdentity__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ClaimsIdentity.h>
#include <Modloader/app/structs/Collection_1_System_Collections_Generic_IEnumerable_1_.h>
#include <Modloader/app/structs/List_1_System_Security_Claims_Claim_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ClaimsIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClaimsIdentity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClaimsIdentity__Fields_FWDDECL)
#include <Modloader/app/structs/ClaimsIdentity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClaimsIdentity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
