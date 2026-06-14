#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ASN1_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ASN1_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ASN1_1__Fields_DEFINED)
#define IL2CPP_STRUCT_ASN1_1__Fields_DEFINED
struct Byte__Array;
struct ArrayList;
struct __declspec(align(8)) ASN1_1__Fields {
    uint8_t m_nTag;
    struct Byte__Array* m_aValue;
    struct ArrayList* elist;
};
#endif
#if !defined(IL2CPP_STRUCT_ASN1_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_ASN1_1__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_ASN1_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ASN1_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ASN1_1__Fields_FWDDECL)
#include <Modloader/app/structs/ASN1_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ASN1_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
