#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGuidMapping__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGuidMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeGuidMapping__Fields_DEFINED
struct RuntimeGuidMapping_BucketEntry__Array;
struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_;
struct __declspec(align(8)) RuntimeGuidMapping__Fields {
    int32_t m_bucketOffset;
    struct RuntimeGuidMapping_BucketEntry__Array* m_linearBucket;
    struct Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_* m_internalCache;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGuidMapping__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_UInt32_RuntimeGuidMapping_CacheEntry_.h>
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry__Array.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGuidMapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGuidMapping__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeGuidMapping__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGuidMapping__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
