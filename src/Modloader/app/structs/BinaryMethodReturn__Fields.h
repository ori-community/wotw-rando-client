#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryMethodReturn__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryMethodReturn__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryMethodReturn__Fields_DEFINED)
#include <Modloader/app/structs/MessageEnum__Enum.h>
#if defined(IL2CPP_STRUCT_MessageEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_BinaryMethodReturn__Fields_DEFINED
struct Object;
struct Object__Array;
struct Type__Array;
struct Type;
struct __declspec(align(8)) BinaryMethodReturn__Fields {
    struct Object* returnValue;
    struct Object__Array* args;
    struct Object* callContext;
    struct Type__Array* argTypes;
    bool bArgsPrimitive;
    MessageEnum__Enum messageEnum;

    struct Type* returnType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryMethodReturn__Fields_FWDDECL)
#define IL2CPP_STRUCT_BinaryMethodReturn__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_BinaryMethodReturn__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryMethodReturn__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BinaryMethodReturn__Fields_FWDDECL)
#include <Modloader/app/structs/BinaryMethodReturn__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryMethodReturn__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
