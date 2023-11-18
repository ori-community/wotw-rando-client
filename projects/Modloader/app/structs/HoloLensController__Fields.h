#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HoloLensController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HoloLensController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoloLensController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HoloLensController__Fields_DEFINED
struct IAsyncResult;
struct HoloLensController__Fields {
    struct MonoBehaviour__Fields _;
    float m_writeTelemetryTimer;
    int64_t m_updateID;
    struct IAsyncResult* m_IAsyncResult;
    int32_t m_fileCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HoloLensController__Fields_FWDDECL)
#define IL2CPP_STRUCT_HoloLensController__Fields_FWDDECL
#include <Modloader/app/structs/IAsyncResult.h>
#endif
#undef IL2CPP_STRUCT_HoloLensController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoloLensController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HoloLensController__Fields_FWDDECL)
#include <Modloader/app/structs/HoloLensController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HoloLensController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
