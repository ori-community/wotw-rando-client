#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeStringMarshal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeStringMarshal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeStringMarshal_DEFINED)
#define IL2CPP_STRUCT_SafeStringMarshal_DEFINED
struct String;
struct SafeStringMarshal {
    struct String* str;
    void* marshaled_string;
};
#endif
#if !defined(IL2CPP_STRUCT_SafeStringMarshal_FWDDECL)
#define IL2CPP_STRUCT_SafeStringMarshal_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SafeStringMarshal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeStringMarshal_DEFINED) && !defined(IL2CPP_STRUCT_SafeStringMarshal_FWDDECL)
#include <Modloader/app/structs/SafeStringMarshal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeStringMarshal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
