#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSampleTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSampleTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSampleTask__Fields_DEFINED)
#include <Modloader/app/structs/SimpleTask__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SimpleTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneSampleTask__Fields_DEFINED
struct Object;
struct SceneSampleTask__Fields {
    struct SimpleTask__Fields _;
    bool m_positionSet;
    int32_t m_frameDelay;
    struct Vector3 m_samplePosition;
    int32_t m_currentFrame;
    struct Object* m_contextData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSampleTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneSampleTask__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_SceneSampleTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSampleTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneSampleTask__Fields_FWDDECL)
#include <Modloader/app/structs/SceneSampleTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSampleTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
