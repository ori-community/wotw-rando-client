#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabUtil__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabUtil__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabUtil__StaticFields_DEFINED)
#include <Modloader/app/structs/DateTimeStyles__Enum.h>
#if defined(IL2CPP_STRUCT_DateTimeStyles__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabUtil__StaticFields_DEFINED
struct String;
struct String__Array;
struct StringBuilder;
struct PlayFabUtil__StaticFields {
    struct String* _localSettingsFileName;
    struct String__Array* _defaultDateTimeFormats;
    DateTimeStyles__Enum DateTimeStyles;

    struct StringBuilder* _sb;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabUtil__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabUtil__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_PlayFabUtil__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabUtil__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabUtil__StaticFields_FWDDECL)
#include <Modloader/app/structs/PlayFabUtil__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabUtil__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
