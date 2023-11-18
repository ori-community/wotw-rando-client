#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedInformation__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedInformation__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedInformation__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SharedInformation__StaticFields_DEFINED
struct String;
struct Dictionary_2_System_String_System_String_;
struct SharedInformation__StaticFields {
    struct String* DATA_FOLDER_PATH;
    struct Dictionary_2_System_String_System_String_* UserDropboxPathMap;
    struct Dictionary_2_System_String_System_String_* UserHostNameToName;
    struct Dictionary_2_System_String_System_String_* UserHostNameToSourceAnimations;
};
#endif
#if !defined(IL2CPP_STRUCT_SharedInformation__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SharedInformation__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SharedInformation__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedInformation__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SharedInformation__StaticFields_FWDDECL)
#include <Modloader/app/structs/SharedInformation__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedInformation__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
