#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryMethodCall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryMethodCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryMethodCall__Fields_DEFINED)
#include <Modloader/app/structs/MessageEnum__Enum.h>
#if defined(IL2CPP_STRUCT_MessageEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_BinaryMethodCall__Fields_DEFINED
struct String;
struct Object__Array;
struct Object;
struct Type__Array;
struct __declspec(align(8)) BinaryMethodCall__Fields {
    struct String* methodName;
    struct String* typeName;
    struct Object__Array* args;
    struct Object* callContext;
    struct Type__Array* argTypes;
    bool bArgsPrimitive;
    MessageEnum__Enum messageEnum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryMethodCall__Fields_FWDDECL)
#define IL2CPP_STRUCT_BinaryMethodCall__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_BinaryMethodCall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryMethodCall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BinaryMethodCall__Fields_FWDDECL)
#include <Modloader/app/structs/BinaryMethodCall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryMethodCall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
