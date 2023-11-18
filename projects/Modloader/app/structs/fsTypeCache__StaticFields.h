#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsTypeCache__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsTypeCache__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsTypeCache__StaticFields_DEFINED)
#define IL2CPP_STRUCT_fsTypeCache__StaticFields_DEFINED
struct Dictionary_2_System_String_System_Type_;
struct Dictionary_2_System_String_System_Reflection_Assembly_;
struct List_1_System_Reflection_Assembly_;
struct fsTypeCache__StaticFields {
    struct Dictionary_2_System_String_System_Type_* _cachedTypes;
    struct Dictionary_2_System_String_System_Reflection_Assembly_* _assembliesByName;
    struct List_1_System_Reflection_Assembly_* _assembliesByIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_fsTypeCache__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_fsTypeCache__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Reflection_Assembly_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Type_.h>
#include <Modloader/app/structs/List_1_System_Reflection_Assembly_.h>
#endif
#undef IL2CPP_STRUCT_fsTypeCache__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsTypeCache__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_fsTypeCache__StaticFields_FWDDECL)
#include <Modloader/app/structs/fsTypeCache__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsTypeCache__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
