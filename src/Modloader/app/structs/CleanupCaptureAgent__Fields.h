#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleanupCaptureAgent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleanupCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleanupCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_CleanupCaptureAgent__Fields_DEFINED
struct __declspec(align(8)) CleanupCaptureAgent__Fields {
    int32_t m_lastGcCount;
    int32_t m_lastCleanupCount;
    int32_t m_lastPanicCount;
    int32_t m_lastHeapSize;
};
#endif
#if !defined(IL2CPP_STRUCT_CleanupCaptureAgent__Fields_FWDDECL)
#define IL2CPP_STRUCT_CleanupCaptureAgent__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CleanupCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleanupCaptureAgent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CleanupCaptureAgent__Fields_FWDDECL)
#include <Modloader/app/structs/CleanupCaptureAgent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleanupCaptureAgent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
