#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriPositionPrediction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriPositionPrediction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriPositionPrediction__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_OriPositionPrediction__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) OriPositionPrediction__Fields {
    struct LayerMask m_groundLayer;
    struct Transform* m_ownerTransform;
    float PredictionTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriPositionPrediction__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriPositionPrediction__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_OriPositionPrediction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriPositionPrediction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriPositionPrediction__Fields_FWDDECL)
#include <Modloader/app/structs/OriPositionPrediction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriPositionPrediction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
