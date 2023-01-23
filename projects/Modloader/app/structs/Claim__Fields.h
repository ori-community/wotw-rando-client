#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Claim__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Claim__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Claim__Fields_DEFINED)
#define IL2CPP_STRUCT_Claim__Fields_DEFINED
struct String;
struct Byte__Array;
struct Dictionary_2_System_String_System_String_;
struct Object;
struct ClaimsIdentity;
struct __declspec(align(8)) Claim__Fields {
    struct String* m_issuer;
    struct String* m_originalIssuer;
    struct String* m_type;
    struct String* m_value;
    struct String* m_valueType;
    struct Byte__Array* m_userSerializationData;
    struct Dictionary_2_System_String_System_String_* m_properties;
    struct Object* m_propertyLock;
    struct ClaimsIdentity* m_subject;
};
#endif
#if !defined(IL2CPP_STRUCT_Claim__Fields_FWDDECL)
#define IL2CPP_STRUCT_Claim__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ClaimsIdentity.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Claim__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Claim__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Claim__Fields_FWDDECL)
#include <Modloader/app/structs/Claim__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Claim__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
