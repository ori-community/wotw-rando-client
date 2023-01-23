#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WindowManager__Fields_DEFINED
struct WindowManager__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_borderlessSetCounter;
    float m_lastTimeCheckedMinimized;
    int32_t lastProps;
    bool m_firstTime;
    bool wasFullScreen;
    bool m_wasFocused;
    bool m_borderless;
    int32_t width;
    int32_t height;
    bool m_fullScreen;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindowManager__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WindowManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindowManager__Fields_FWDDECL)
#include <Modloader/app/structs/WindowManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
