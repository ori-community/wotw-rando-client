#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaptureData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaptureData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureData__Fields_DEFINED)
#define IL2CPP_STRUCT_CaptureData__Fields_DEFINED
struct String;
struct __declspec(align(8)) CaptureData__Fields {
    int32_t m_capturedFrames;
    int32_t m_crossFadeTime;
    struct String* m_shotName;
    bool m_flipInX;
};
#endif
#if !defined(IL2CPP_STRUCT_CaptureData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CaptureData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CaptureData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CaptureData__Fields_FWDDECL)
#include <Modloader/app/structs/CaptureData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaptureData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
