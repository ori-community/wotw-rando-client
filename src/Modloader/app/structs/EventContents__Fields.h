#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventContents__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventContents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventContents__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_EventContents__Fields_DEFINED
struct EntityKey_4;
struct String;
struct Object;
struct __declspec(align(8)) EventContents__Fields {
    struct EntityKey_4* Entity;
    struct String* EventNamespace;
    struct String* Name;
    struct String* OriginalId;
    struct Nullable_1_DateTime_ OriginalTimestamp;
    struct Object* Payload;
    struct String* PayloadJSON;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventContents__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventContents__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_4.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EventContents__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventContents__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventContents__Fields_FWDDECL)
#include <Modloader/app/structs/EventContents__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventContents__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
