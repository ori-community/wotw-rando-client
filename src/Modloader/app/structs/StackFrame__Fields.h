#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackFrame__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackFrame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackFrame__Fields_DEFINED)
#define IL2CPP_STRUCT_StackFrame__Fields_DEFINED
struct MethodBase;
struct String;
struct __declspec(align(8)) StackFrame__Fields {
    int32_t ilOffset;
    int32_t nativeOffset;
    int64_t methodAddress;
    uint32_t methodIndex;
    struct MethodBase* methodBase;
    struct String* fileName;
    int32_t lineNumber;
    int32_t columnNumber;
    struct String* internalMethodName;
};
#endif
#if !defined(IL2CPP_STRUCT_StackFrame__Fields_FWDDECL)
#define IL2CPP_STRUCT_StackFrame__Fields_FWDDECL
#include <Modloader/app/structs/MethodBase.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StackFrame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackFrame__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StackFrame__Fields_FWDDECL)
#include <Modloader/app/structs/StackFrame__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackFrame__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
