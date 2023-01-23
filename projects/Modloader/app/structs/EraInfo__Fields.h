#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EraInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EraInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EraInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_EraInfo__Fields_DEFINED
struct String;
struct __declspec(align(8)) EraInfo__Fields {
    int32_t era;
    int64_t ticks;
    int32_t yearOffset;
    int32_t minEraYear;
    int32_t maxEraYear;
    struct String* eraName;
    struct String* abbrevEraName;
    struct String* englishEraName;
};
#endif
#if !defined(IL2CPP_STRUCT_EraInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_EraInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EraInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EraInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EraInfo__Fields_FWDDECL)
#include <Modloader/app/structs/EraInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EraInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
