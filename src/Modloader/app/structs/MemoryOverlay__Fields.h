#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemoryOverlay__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemoryOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryOverlay__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MemoryOverlay__Fields_DEFINED
struct Material;
struct MemoryOverlay__Fields {
    struct MonoBehaviour__Fields _;
    struct Material* m_material;
    uint64_t m_executableSize;
    uint64_t m_physicalMemorySize;
    bool formatMemoryByteCount;
    bool m_imguiRegistered;
    int32_t m_curY;
    int32_t m_curX;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemoryOverlay__Fields_FWDDECL)
#define IL2CPP_STRUCT_MemoryOverlay__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_MemoryOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemoryOverlay__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MemoryOverlay__Fields_FWDDECL)
#include <Modloader/app/structs/MemoryOverlay__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemoryOverlay__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
