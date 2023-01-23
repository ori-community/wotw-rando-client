#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoProgressBar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoProgressBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoProgressBar__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoProgressBar__Fields_DEFINED
struct VideoEditor;
struct Image;
struct PointerEventData;
struct VideoProgressBar__Fields {
    struct MonoBehaviour__Fields _;
    struct VideoEditor* videoEditor;
    struct Image* progress;
    struct PointerEventData* m_lastEvent;
    bool m_seekRequested;
    float m_skipDelay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoProgressBar__Fields_FWDDECL)
#define IL2CPP_STRUCT_VideoProgressBar__Fields_FWDDECL
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/VideoEditor.h>
#endif
#undef IL2CPP_STRUCT_VideoProgressBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoProgressBar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VideoProgressBar__Fields_FWDDECL)
#include <Modloader/app/structs/VideoProgressBar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoProgressBar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
