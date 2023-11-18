#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Match_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Match_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Match_1__Fields_DEFINED)
#include <Modloader/app/structs/MatchState__Enum.h>
#if defined(IL2CPP_STRUCT_MatchState__Enum_DEFINED)
#define IL2CPP_STRUCT_Match_1__Fields_DEFINED
struct __declspec(align(8)) Match_1__Fields {
    MatchState__Enum state;

    int32_t pos;
    int32_t len;
    uint8_t symbol;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Match_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Match_1__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Match_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Match_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Match_1__Fields_FWDDECL)
#include <Modloader/app/structs/Match_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Match_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
