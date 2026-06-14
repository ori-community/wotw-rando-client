#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DTSubString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DTSubString_INITIALIZING
#if !defined(IL2CPP_STRUCT_DTSubString_DEFINED)
#include <Modloader/app/structs/DTSubStringType__Enum.h>
#if defined(IL2CPP_STRUCT_DTSubStringType__Enum_DEFINED)
#define IL2CPP_STRUCT_DTSubString_DEFINED
struct String;
struct DTSubString {
    struct String* s;
    int32_t index;
    int32_t length;
    DTSubStringType__Enum type;

    int32_t value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DTSubString_FWDDECL)
#define IL2CPP_STRUCT_DTSubString_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DTSubString_INITIALIZING
#if !defined(IL2CPP_STRUCT_DTSubString_DEFINED) && !defined(IL2CPP_STRUCT_DTSubString_FWDDECL)
#include <Modloader/app/structs/DTSubString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DTSubString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
