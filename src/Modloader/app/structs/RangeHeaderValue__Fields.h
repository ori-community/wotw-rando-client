#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeHeaderValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_RangeHeaderValue__Fields_DEFINED
struct List_1_System_Net_Http_Headers_RangeItemHeaderValue_;
struct String;
struct __declspec(align(8)) RangeHeaderValue__Fields {
    struct List_1_System_Net_Http_Headers_RangeItemHeaderValue_* ranges;
    struct String* unit;
};
#endif
#if !defined(IL2CPP_STRUCT_RangeHeaderValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_RangeHeaderValue__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_RangeItemHeaderValue_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RangeHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeHeaderValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RangeHeaderValue__Fields_FWDDECL)
#include <Modloader/app/structs/RangeHeaderValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeHeaderValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
