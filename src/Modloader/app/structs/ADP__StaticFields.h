#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ADP__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ADP__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ADP__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ADP__StaticFields_DEFINED
struct Type;
struct String;
struct String__Array;
struct ADP__StaticFields {
    struct Type* s_stackOverflowType;
    struct Type* s_outOfMemoryType;
    struct Type* s_threadAbortType;
    struct Type* s_nullReferenceType;
    struct Type* s_accessViolationType;
    struct Type* s_securityType;
    bool IsWindowsNT;
    bool IsPlatformNT5;
    struct String* StrEmpty;
    struct String__Array* AzureSqlServerEndpoints;
    void* PtrZero;
    int32_t PtrSize;
};
#endif
#if !defined(IL2CPP_STRUCT_ADP__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ADP__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ADP__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ADP__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ADP__StaticFields_FWDDECL)
#include <Modloader/app/structs/ADP__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ADP__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
