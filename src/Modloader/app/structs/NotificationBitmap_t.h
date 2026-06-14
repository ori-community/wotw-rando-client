#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotificationBitmap_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotificationBitmap_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotificationBitmap_t_DEFINED)
#define IL2CPP_STRUCT_NotificationBitmap_t_DEFINED
struct NotificationBitmap_t {
    void* m_pImageData;
    int32_t m_nWidth;
    int32_t m_nHeight;
    int32_t m_nBytesPerPixel;
};
#endif
#if !defined(IL2CPP_STRUCT_NotificationBitmap_t_FWDDECL)
#define IL2CPP_STRUCT_NotificationBitmap_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_NotificationBitmap_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotificationBitmap_t_DEFINED) && !defined(IL2CPP_STRUCT_NotificationBitmap_t_FWDDECL)
#include <Modloader/app/structs/NotificationBitmap_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotificationBitmap_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
