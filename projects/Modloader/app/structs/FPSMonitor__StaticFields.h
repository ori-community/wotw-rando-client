#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSMonitor__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSMonitor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSMonitor__StaticFields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_FPSMonitor__StaticFields_DEFINED
struct FPSMonitor;
struct FPSMonitor__StaticFields {
    struct FPSMonitor* Instance;
    struct Color m_terribleColor;
    struct Color m_badColor;
    struct Color m_goodColor;
    struct Color m_mediumStartColor;
    struct Color m_mediumEndColor;
    int32_t m_terribleHealthMax;
    int32_t m_badHealthMax;
    int32_t m_mediumHealthMax;
    int32_t m_perfectDRSMin;
    int32_t m_mediumDRSMin;
    int32_t m_badDRSMin;
    int32_t m_terribleDRSMin;
    float m_terribleGPUTimeMin;
    float m_terribleGPUTimeMax;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSMonitor__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FPSMonitor__StaticFields_FWDDECL
#include <Modloader/app/structs/FPSMonitor.h>
#endif
#undef IL2CPP_STRUCT_FPSMonitor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSMonitor__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FPSMonitor__StaticFields_FWDDECL)
#include <Modloader/app/structs/FPSMonitor__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSMonitor__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
