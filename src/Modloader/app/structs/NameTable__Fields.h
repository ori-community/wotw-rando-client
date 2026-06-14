#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameTable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameTable__Fields_DEFINED)
#define IL2CPP_STRUCT_NameTable__Fields_DEFINED
struct NameTable_Entry__Array;
struct __declspec(align(8)) NameTable__Fields {
    struct NameTable_Entry__Array* entries;
    int32_t count;
    int32_t mask;
    int32_t hashCodeRandomizer;
};
#endif
#if !defined(IL2CPP_STRUCT_NameTable__Fields_FWDDECL)
#define IL2CPP_STRUCT_NameTable__Fields_FWDDECL
#include <Modloader/app/structs/NameTable_Entry__Array.h>
#endif
#undef IL2CPP_STRUCT_NameTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameTable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NameTable__Fields_FWDDECL)
#include <Modloader/app/structs/NameTable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameTable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
