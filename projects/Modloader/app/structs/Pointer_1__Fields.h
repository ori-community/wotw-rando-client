#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Pointer_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Pointer_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pointer_1__Fields_DEFINED)
#define IL2CPP_STRUCT_Pointer_1__Fields_DEFINED
struct Void;
struct RuntimeType;
struct __declspec(align(8)) Pointer_1__Fields {
    struct Void* _ptr;
    struct RuntimeType* _ptrType;
};
#endif
#if !defined(IL2CPP_STRUCT_Pointer_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Pointer_1__Fields_FWDDECL
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/Void.h>
#endif
#undef IL2CPP_STRUCT_Pointer_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pointer_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Pointer_1__Fields_FWDDECL)
#include <Modloader/app/structs/Pointer_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Pointer_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
