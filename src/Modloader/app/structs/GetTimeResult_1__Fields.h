#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTimeResult_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTimeResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTimeResult_1__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_GetTimeResult_1__Fields_DEFINED
struct GetTimeResult_1__Fields {
    struct PlayFabResultCommon__Fields _;
    struct DateTime Time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTimeResult_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetTimeResult_1__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GetTimeResult_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTimeResult_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetTimeResult_1__Fields_FWDDECL)
#include <Modloader/app/structs/GetTimeResult_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTimeResult_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
