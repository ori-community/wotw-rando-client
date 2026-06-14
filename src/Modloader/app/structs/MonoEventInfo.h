#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoEventInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoEventInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoEventInfo_DEFINED)
#include <Modloader/app/structs/EventAttributes__Enum.h>
#if defined(IL2CPP_STRUCT_EventAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_MonoEventInfo_DEFINED
struct Type;
struct String;
struct MethodInfo_1;
struct MethodInfo_1__Array;
struct MonoEventInfo {
    struct Type* declaring_type;
    struct Type* reflected_type;
    struct String* name;
    struct MethodInfo_1* add_method;
    struct MethodInfo_1* remove_method;
    struct MethodInfo_1* raise_method;
    EventAttributes__Enum attrs;

    struct MethodInfo_1__Array* other_methods;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoEventInfo_FWDDECL)
#define IL2CPP_STRUCT_MonoEventInfo_FWDDECL
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_MonoEventInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoEventInfo_DEFINED) && !defined(IL2CPP_STRUCT_MonoEventInfo_FWDDECL)
#include <Modloader/app/structs/MonoEventInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoEventInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
