#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADMessageBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADMessageBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMessageBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CADMessageBase__Fields_DEFINED
struct Object__Array;
struct Byte__Array;
struct CADArgHolder;
struct __declspec(align(8)) CADMessageBase__Fields {
    struct Object__Array* _args;
    struct Byte__Array* _serializedArgs;
    int32_t _propertyCount;
    struct CADArgHolder* _callContext;
    struct Byte__Array* serializedMethod;
};
#endif
#if !defined(IL2CPP_STRUCT_CADMessageBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_CADMessageBase__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CADArgHolder.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_CADMessageBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMessageBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CADMessageBase__Fields_FWDDECL)
#include <Modloader/app/structs/CADMessageBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADMessageBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
