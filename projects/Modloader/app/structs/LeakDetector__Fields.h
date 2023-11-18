#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeakDetector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeakDetector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakDetector__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LeakDetector__Fields_DEFINED
struct LeakDetector__Fields {
    struct MonoBehaviour__Fields _;
    int32_t ObjectsCount;
    int32_t TextureCount;
    int32_t AudioClipCount;
    int32_t MeshCount;
    int32_t MaterialCount;
    int32_t GameObjectCount;
    int32_t ComponentCount;
    float m_nextSample;
    float m_sampleInterval;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeakDetector__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeakDetector__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LeakDetector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeakDetector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeakDetector__Fields_FWDDECL)
#include <Modloader/app/structs/LeakDetector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeakDetector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
