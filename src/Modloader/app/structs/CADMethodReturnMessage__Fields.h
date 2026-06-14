#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADMethodReturnMessage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADMethodReturnMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMethodReturnMessage__Fields_DEFINED)
#include <Modloader/app/structs/CADMessageBase__Fields.h>
#if defined(IL2CPP_STRUCT_CADMessageBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CADMethodReturnMessage__Fields_DEFINED
struct Object;
struct CADArgHolder;
struct Type__Array;
struct CADMethodReturnMessage__Fields {
    struct CADMessageBase__Fields _;
    struct Object* _returnValue;
    struct CADArgHolder* _exception;
    struct Type__Array* _sig;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CADMethodReturnMessage__Fields_FWDDECL)
#define IL2CPP_STRUCT_CADMethodReturnMessage__Fields_FWDDECL
#include <Modloader/app/structs/CADArgHolder.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_CADMethodReturnMessage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMethodReturnMessage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CADMethodReturnMessage__Fields_FWDDECL)
#include <Modloader/app/structs/CADMethodReturnMessage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADMethodReturnMessage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
