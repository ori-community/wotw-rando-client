#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoolCaptureAgent__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoolCaptureAgent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolCaptureAgent__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PoolCaptureAgent__StaticFields_DEFINED
struct List_1_System_ValueTuple_4_;
struct List_1_System_ValueTuple_2__1;
struct PoolCaptureAgent__StaticFields {
    struct List_1_System_ValueTuple_4_* ExhaustedInstantiations;
    int32_t PooledInstantiationCount;
    float PoolLoadFromScene;
    float PoolPrewarmFromScene;
    float PoolDestructionQueue;
    struct List_1_System_ValueTuple_2__1* UnpooledInstantiations;
    float FrameInstantiationCost;
};
#endif
#if !defined(IL2CPP_STRUCT_PoolCaptureAgent__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PoolCaptureAgent__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_System_ValueTuple_2__1.h>
#include <Modloader/app/structs/List_1_System_ValueTuple_4_.h>
#endif
#undef IL2CPP_STRUCT_PoolCaptureAgent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolCaptureAgent__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PoolCaptureAgent__StaticFields_FWDDECL)
#include <Modloader/app/structs/PoolCaptureAgent__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoolCaptureAgent__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
