#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameTable_Entry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameTable_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameTable_Entry__Fields_DEFINED)
#define IL2CPP_STRUCT_NameTable_Entry__Fields_DEFINED
struct String;
struct NameTable_Entry;
struct __declspec(align(8)) NameTable_Entry__Fields {
    struct String* str;
    int32_t hashCode;
    struct NameTable_Entry* next;
};
#endif
#if !defined(IL2CPP_STRUCT_NameTable_Entry__Fields_FWDDECL)
#define IL2CPP_STRUCT_NameTable_Entry__Fields_FWDDECL
#include <Modloader/app/structs/NameTable_Entry.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NameTable_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameTable_Entry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NameTable_Entry__Fields_FWDDECL)
#include <Modloader/app/structs/NameTable_Entry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameTable_Entry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
