#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeOutBreakable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeOutBreakable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeOutBreakable__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeOutBreakable__Fields_DEFINED
struct TimeOutBreakable__Fields {
    struct GuidOwner__Fields _;
    float Timeout;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeOutBreakable__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeOutBreakable__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimeOutBreakable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeOutBreakable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeOutBreakable__Fields_FWDDECL)
#include <Modloader/app/structs/TimeOutBreakable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeOutBreakable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
