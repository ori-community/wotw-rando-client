#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgumentOutOfRangeException__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgumentOutOfRangeException__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentOutOfRangeException__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ArgumentOutOfRangeException__StaticFields_DEFINED
struct String;
struct ArgumentOutOfRangeException__StaticFields {
    struct String* _rangeMessage;
};
#endif
#if !defined(IL2CPP_STRUCT_ArgumentOutOfRangeException__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ArgumentOutOfRangeException__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ArgumentOutOfRangeException__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgumentOutOfRangeException__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ArgumentOutOfRangeException__StaticFields_FWDDECL)
#include <Modloader/app/structs/ArgumentOutOfRangeException__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgumentOutOfRangeException__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
