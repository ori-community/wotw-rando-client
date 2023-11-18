#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformanceDebugMenuPage__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformanceDebugMenuPage__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage__StaticFields_DEFINED)
#include <Modloader/app/structs/FilterMode__Enum.h>
#if defined(IL2CPP_STRUCT_FilterMode__Enum_DEFINED)
#define IL2CPP_STRUCT_PerformanceDebugMenuPage__StaticFields_DEFINED
struct List_1_System_Byte__1;
struct PerformanceDebugMenuPage__StaticFields {
    struct List_1_System_Byte__1* m_fakeAllocations;
    FilterMode__Enum m_forceTrilinear;

    float m_mipBiasOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PerformanceDebugMenuPage__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_System_Byte__1.h>
#endif
#undef IL2CPP_STRUCT_PerformanceDebugMenuPage__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PerformanceDebugMenuPage__StaticFields_FWDDECL)
#include <Modloader/app/structs/PerformanceDebugMenuPage__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformanceDebugMenuPage__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
