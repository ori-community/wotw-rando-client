#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SampleComparer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SampleComparer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleComparer__Fields_DEFINED)
#include <Modloader/app/structs/Color32.h>
#if defined(IL2CPP_STRUCT_Color32_DEFINED)
#define IL2CPP_STRUCT_SampleComparer__Fields_DEFINED
struct __declspec(align(8)) SampleComparer__Fields {
    int32_t m_height;
    int32_t m_width;
    struct Color32 m_masterPixelClr;
    struct Color32 m_samplePixelClr;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SampleComparer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SampleComparer__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SampleComparer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SampleComparer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SampleComparer__Fields_FWDDECL)
#include <Modloader/app/structs/SampleComparer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SampleComparer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
