#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_DEFINED
struct String__Array;
struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_;
struct LeakedSceneObjectDetector__Fields {
    struct MonoBehaviour__Fields _;
    struct String__Array* m_ignoreList;
    struct String__Array* m_ignoreStartsWithList;
    struct String__Array* m_rootsToCheck;
    struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_* m_data;
    struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_* m_previousData;
    float m_delay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeakedSceneObjectDetector__Fields_FWDDECL)
#include <Modloader/app/structs/LeakedSceneObjectDetector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeakedSceneObjectDetector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
