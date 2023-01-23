#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Utils_2__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Utils_2__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utils_2__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Utils_2__StaticFields_DEFINED
struct String__Array;
struct Utils_2__StaticFields {
    struct String__Array* byteSizes;
    struct String__Array* pixelSizes;
};
#endif
#if !defined(IL2CPP_STRUCT_Utils_2__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Utils_2__StaticFields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_Utils_2__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utils_2__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Utils_2__StaticFields_FWDDECL)
#include <Modloader/app/structs/Utils_2__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Utils_2__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
