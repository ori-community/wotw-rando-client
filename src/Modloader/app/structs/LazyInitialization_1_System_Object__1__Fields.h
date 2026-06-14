#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LazyInitialization_1_System_Object__1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LazyInitialization_1_System_Object__1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LazyInitialization_1_System_Object__1__Fields_DEFINED)
#define IL2CPP_STRUCT_LazyInitialization_1_System_Object__1__Fields_DEFINED
struct Object;
struct Func_1_Object_;
struct __declspec(align(8)) LazyInitialization_1_System_Object__1__Fields {
    struct Object* m_value;
    struct Func_1_Object_* m_initializer;
};
#endif
#if !defined(IL2CPP_STRUCT_LazyInitialization_1_System_Object__1__Fields_FWDDECL)
#define IL2CPP_STRUCT_LazyInitialization_1_System_Object__1__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_LazyInitialization_1_System_Object__1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LazyInitialization_1_System_Object__1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LazyInitialization_1_System_Object__1__Fields_FWDDECL)
#include <Modloader/app/structs/LazyInitialization_1_System_Object__1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LazyInitialization_1_System_Object__1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
