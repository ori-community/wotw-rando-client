#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsSerializer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsSerializer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsSerializer__StaticFields_DEFINED)
#define IL2CPP_STRUCT_fsSerializer__StaticFields_DEFINED
struct HashSet_1_System_String_;
struct String;
struct fsSerializer__StaticFields {
    struct HashSet_1_System_String_* _reservedKeywords;
    struct String* Key_ObjectReference;
    struct String* Key_ObjectDefinition;
    struct String* Key_InstanceType;
    struct String* Key_Version;
    struct String* Key_Content;
};
#endif
#if !defined(IL2CPP_STRUCT_fsSerializer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_fsSerializer__StaticFields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_fsSerializer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsSerializer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_fsSerializer__StaticFields_FWDDECL)
#include <Modloader/app/structs/fsSerializer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsSerializer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
