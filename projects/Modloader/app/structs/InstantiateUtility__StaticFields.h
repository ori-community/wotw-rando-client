#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateUtility__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InstantiateUtility__StaticFields_DEFINED
struct Stopwatch;
struct Dictionary_2_System_Int32_System_Int32_;
struct Queue_1_SimpleGenericPool_1_PoolItem_;
struct SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_;
struct InstantiateUtility__StaticFields {
    bool DisableInstantiationQueue;
    bool DisableOptionalInstantiations;
    int32_t LogErrorForInstantiationsAfterSeconds;
    bool DisableParticles;
    bool CheckInstantiationsAgainstStripList;
    struct Stopwatch* m_stopwatch;
    bool AllowPoolingInSpiritTrialRaces;
    struct Dictionary_2_System_Int32_System_Int32_* s_ownershipMap;
    struct Queue_1_SimpleGenericPool_1_PoolItem_* InstantiateQueue;
    struct SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_* InstantiationInfoPool;
};
#endif
#if !defined(IL2CPP_STRUCT_InstantiateUtility__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InstantiateUtility__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/Queue_1_SimpleGenericPool_1_PoolItem_.h>
#include <Modloader/app/structs/SimpleGenericPool_1_InstantiateUtility_InstantiateInfo_.h>
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_InstantiateUtility__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateUtility__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateUtility__StaticFields_FWDDECL)
#include <Modloader/app/structs/InstantiateUtility__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateUtility__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
