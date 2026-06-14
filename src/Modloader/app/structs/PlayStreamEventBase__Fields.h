#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayStreamEventBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayStreamEventBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_String_;
struct List_1_System_Object_;
struct Object;
struct __declspec(align(8)) PlayStreamEventBase__Fields {
    struct String* Source;
    struct String* EventId;
    struct String* EntityId;
    struct String* EntityType;
    struct String* EventNamespace;
    struct String* EventName;
    struct DateTime Timestamp;
    struct Dictionary_2_System_String_System_String_* CustomTags;
    struct List_1_System_Object_* History;
    struct Object* Reserved;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayStreamEventBase__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayStreamEventBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_FWDDECL)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
