#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdDuration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdDuration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDuration_DEFINED)
#define IL2CPP_STRUCT_XsdDuration_DEFINED
struct XsdDuration {
    int32_t years;
    int32_t months;
    int32_t days;
    int32_t hours;
    int32_t minutes;
    int32_t seconds;
    uint32_t nanoseconds;
};
#endif
#if !defined(IL2CPP_STRUCT_XsdDuration_FWDDECL)
#define IL2CPP_STRUCT_XsdDuration_FWDDECL
#endif
#undef IL2CPP_STRUCT_XsdDuration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDuration_DEFINED) && !defined(IL2CPP_STRUCT_XsdDuration_FWDDECL)
#include <Modloader/app/structs/XsdDuration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdDuration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
