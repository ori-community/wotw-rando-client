#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RectExt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RectExt_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectExt_DEFINED)
#define IL2CPP_STRUCT_RectExt_DEFINED
struct RectExt {
    float m_XMin;
    float m_YMin;
    float m_Width;
    float m_Height;
};
#endif
#if !defined(IL2CPP_STRUCT_RectExt_FWDDECL)
#define IL2CPP_STRUCT_RectExt_FWDDECL
#endif
#undef IL2CPP_STRUCT_RectExt_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectExt_DEFINED) && !defined(IL2CPP_STRUCT_RectExt_FWDDECL)
#include <Modloader/app/structs/RectExt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RectExt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
