#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryProfiler__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryProfiler__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MemoryProfiler__StaticFields_DEFINED
struct Action_2_String_Boolean_;
struct Action_1_UnityEngine_Profiling_Memory_Experimental_MetaData_;
struct MemoryProfiler__StaticFields {
    struct Action_2_String_Boolean_* snapshotFinished;
    struct Action_1_UnityEngine_Profiling_Memory_Experimental_MetaData_* createMetaData;
};
#endif
#if !defined(IL2CPP_STRUCT_MemoryProfiler__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MemoryProfiler__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_Profiling_Memory_Experimental_MetaData_.h>
#include <Modloader/app/structs/Action_2_String_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_MemoryProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryProfiler__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MemoryProfiler__StaticFields_FWDDECL)
#include <Modloader/app/structs/MemoryProfiler__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryProfiler__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
