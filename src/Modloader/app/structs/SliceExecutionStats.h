#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SliceExecutionStats_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SliceExecutionStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceExecutionStats_DEFINED)
#define IL2CPP_STRUCT_SliceExecutionStats_DEFINED
struct String;
struct Type;
struct SliceExecutionStats {
    struct String* OwnerName;
    struct String* JobName;
    struct Type* JobType;
    double Duration;
    float Budget;
    struct String* ContextualData;
};
#endif
#if !defined(IL2CPP_STRUCT_SliceExecutionStats_FWDDECL)
#define IL2CPP_STRUCT_SliceExecutionStats_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_SliceExecutionStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliceExecutionStats_DEFINED) && !defined(IL2CPP_STRUCT_SliceExecutionStats_FWDDECL)
#include <Modloader/app/structs/SliceExecutionStats.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SliceExecutionStats.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
