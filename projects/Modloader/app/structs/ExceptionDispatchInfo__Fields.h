#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_DEFINED
struct Exception;
struct Object;
struct __declspec(align(8)) ExceptionDispatchInfo__Fields {
    struct Exception* m_Exception;
    struct Object* m_stackTrace;
};
#endif
#if !defined(IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_FWDDECL
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_FWDDECL)
#include <Modloader/app/structs/ExceptionDispatchInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionDispatchInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
