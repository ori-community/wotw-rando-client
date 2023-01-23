#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_StatInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_StatInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_StatInfo_DEFINED)
#include <Modloader/app/structs/MicroProfiler_StatType__Enum.h>
#if defined(IL2CPP_STRUCT_MicroProfiler_StatType__Enum_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_StatInfo_DEFINED
struct MicroProfiler_StatInfo {
    float m_value;
    MicroProfiler_StatType__Enum m_type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_StatInfo_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_StatInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_MicroProfiler_StatInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_StatInfo_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_StatInfo_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_StatInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_StatInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
