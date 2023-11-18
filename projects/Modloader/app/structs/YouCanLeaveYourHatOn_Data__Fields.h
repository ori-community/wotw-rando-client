#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_YouCanLeaveYourHatOn_Data__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_YouCanLeaveYourHatOn_Data__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_YouCanLeaveYourHatOn_Data__Fields_DEFINED)
#define IL2CPP_STRUCT_YouCanLeaveYourHatOn_Data__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct __declspec(align(8)) YouCanLeaveYourHatOn_Data__Fields {
    struct String* Type;
    struct List_1_System_String_* Names;
};
#endif
#if !defined(IL2CPP_STRUCT_YouCanLeaveYourHatOn_Data__Fields_FWDDECL)
#define IL2CPP_STRUCT_YouCanLeaveYourHatOn_Data__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_YouCanLeaveYourHatOn_Data__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_YouCanLeaveYourHatOn_Data__Fields_DEFINED) && !defined(IL2CPP_STRUCT_YouCanLeaveYourHatOn_Data__Fields_FWDDECL)
#include <Modloader/app/structs/YouCanLeaveYourHatOn_Data__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/YouCanLeaveYourHatOn_Data__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
