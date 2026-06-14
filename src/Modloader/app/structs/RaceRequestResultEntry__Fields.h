#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceRequestResultEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceRequestResultEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRequestResultEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceRequestResultEntry__Fields_DEFINED
struct String;
struct Byte__Array;
struct __declspec(align(8)) RaceRequestResultEntry__Fields {
    struct String* _DisplayName_k__BackingField;
    int32_t _Score_k__BackingField;
    int32_t _Position_k__BackingField;
    bool _IsMe_k__BackingField;
    struct Byte__Array* _Data_k__BackingField;
    bool _IsSteamEntry_k__BackingField;
    bool _IsLiveEntry_k__BackingField;
    struct String* _UserID_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_RaceRequestResultEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceRequestResultEntry__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RaceRequestResultEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRequestResultEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceRequestResultEntry__Fields_FWDDECL)
#include <Modloader/app/structs/RaceRequestResultEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceRequestResultEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
