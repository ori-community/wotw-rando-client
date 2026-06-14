#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FSharpFunction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FSharpFunction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FSharpFunction__Fields_DEFINED)
#define IL2CPP_STRUCT_FSharpFunction__Fields_DEFINED
struct Object;
struct MethodCall_2_System_Object_System_Object_;
struct __declspec(align(8)) FSharpFunction__Fields {
    struct Object* _instance;
    struct MethodCall_2_System_Object_System_Object_* _invoker;
};
#endif
#if !defined(IL2CPP_STRUCT_FSharpFunction__Fields_FWDDECL)
#define IL2CPP_STRUCT_FSharpFunction__Fields_FWDDECL
#include <Modloader/app/structs/MethodCall_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_FSharpFunction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FSharpFunction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FSharpFunction__Fields_FWDDECL)
#include <Modloader/app/structs/FSharpFunction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FSharpFunction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
