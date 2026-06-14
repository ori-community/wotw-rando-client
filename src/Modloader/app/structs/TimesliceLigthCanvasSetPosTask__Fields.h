#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceLigthCanvasSetPosTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceLigthCanvasSetPosTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceLigthCanvasSetPosTask__Fields_DEFINED)
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TimesliceLigthCanvasSetPosTask__Fields_DEFINED
struct List_1_UnityEngine_Renderer_;
struct TimesliceLigthCanvasSetPosTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct Vector3 m_position;
    struct List_1_UnityEngine_Renderer_* targetRenderers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceLigthCanvasSetPosTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimesliceLigthCanvasSetPosTask__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#endif
#undef IL2CPP_STRUCT_TimesliceLigthCanvasSetPosTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceLigthCanvasSetPosTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceLigthCanvasSetPosTask__Fields_FWDDECL)
#include <Modloader/app/structs/TimesliceLigthCanvasSetPosTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceLigthCanvasSetPosTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
