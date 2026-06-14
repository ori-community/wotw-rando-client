#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsResult__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsResult__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsResult__StaticFields_DEFINED)
#include <Modloader/app/structs/fsResult.h>
#if defined(IL2CPP_STRUCT_fsResult_DEFINED)
#define IL2CPP_STRUCT_fsResult__StaticFields_DEFINED
struct String__Array;
struct fsResult__StaticFields {
    struct String__Array* EmptyStringArray;
    struct fsResult Success;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsResult__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_fsResult__StaticFields_FWDDECL
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_fsResult__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsResult__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_fsResult__StaticFields_FWDDECL)
#include <Modloader/app/structs/fsResult__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsResult__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
