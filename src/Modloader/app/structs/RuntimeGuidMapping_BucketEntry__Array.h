#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry__Array_DEFINED)
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry.h>
#if defined(IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_DEFINED)
#define IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry__Array_DEFINED
struct RuntimeGuidMapping_BucketEntry__Array__Class;
struct RuntimeGuidMapping_BucketEntry__Array {
    struct RuntimeGuidMapping_BucketEntry__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct RuntimeGuidMapping_BucketEntry vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry__Array_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry__Array_FWDDECL
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry__Array_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry__Array_FWDDECL)
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
