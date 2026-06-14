#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionHandler__Fields_DEFINED
struct Type;
struct ExceptionFilter;
struct __declspec(align(8)) ExceptionHandler__Fields {
    struct Type* _exceptionType;
    int32_t LabelIndex;
    int32_t HandlerStartIndex;
    int32_t HandlerEndIndex;
    struct ExceptionFilter* Filter;
};
#endif
#if !defined(IL2CPP_STRUCT_ExceptionHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExceptionHandler__Fields_FWDDECL
#include <Modloader/app/structs/ExceptionFilter.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ExceptionHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionHandler__Fields_FWDDECL)
#include <Modloader/app/structs/ExceptionHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
