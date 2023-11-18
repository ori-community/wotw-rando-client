#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriPredictionHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriPredictionHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriPredictionHelper__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_OriPredictionHelper__Fields_DEFINED
struct OriPredictionHelper_Settings;
struct SeinPlaceholder;
struct __declspec(align(8)) OriPredictionHelper__Fields {
    struct OriPredictionHelper_Settings* m_settings;
    struct Vector3 m_oriSmoothedWorldSpeed;
    struct Vector3 m_worldSpeedDampCurrentSpeed;
    struct Vector3 m_oriPredictedPos;
    struct SeinPlaceholder* m_cachedHolder;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriPredictionHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriPredictionHelper__Fields_FWDDECL
#include <Modloader/app/structs/OriPredictionHelper_Settings.h>
#include <Modloader/app/structs/SeinPlaceholder.h>
#endif
#undef IL2CPP_STRUCT_OriPredictionHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriPredictionHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriPredictionHelper__Fields_FWDDECL)
#include <Modloader/app/structs/OriPredictionHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriPredictionHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
