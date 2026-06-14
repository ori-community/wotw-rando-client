#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceEntry__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_RaceEntry__Fields_DEFINED
struct String;
struct Byte__Array;
struct __declspec(align(8)) RaceEntry__Fields {
    struct String* _UserId_k__BackingField;
    struct String* _DisplayName_k__BackingField;
    int32_t _Score_k__BackingField;
    int32_t _Position_k__BackingField;
    struct Byte__Array* _Data_k__BackingField;
    struct DateTime _EntryTime_k__BackingField;
    bool _IsMe_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceEntry__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RaceEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceEntry__Fields_FWDDECL)
#include <Modloader/app/structs/RaceEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
