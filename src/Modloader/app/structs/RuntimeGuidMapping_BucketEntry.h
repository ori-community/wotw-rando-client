#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_DEFINED)
#define IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_DEFINED
struct Byte__Array;
struct RuntimeGuidMapping_BucketEntry {
    struct Byte__Array* Guid;
    uint32_t Id;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGuidMapping_BucketEntry_FWDDECL)
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
