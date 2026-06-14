#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrashContext_Data_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrashContext_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_Data_DEFINED)
#include <Modloader/app/structs/CrashContext_Flags__Enum.h>
#if defined(IL2CPP_STRUCT_CrashContext_Flags__Enum_DEFINED)
#define IL2CPP_STRUCT_CrashContext_Data_DEFINED
struct CrashContext_Data {
    uint32_t Counter;
    float RealtimeSinceStartup;
    float PositionX;
    float PositionY;
    uint64_t UserID1;
    uint64_t UserID2;
    uint64_t GcHeapSize;
    uint64_t GcUsedSize;
    int32_t UnloadsSinceLastResourceCollect;
    CrashContext_Flags__Enum Flags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrashContext_Data_FWDDECL)
#define IL2CPP_STRUCT_CrashContext_Data_FWDDECL
#endif
#undef IL2CPP_STRUCT_CrashContext_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrashContext_Data_DEFINED) && !defined(IL2CPP_STRUCT_CrashContext_Data_FWDDECL)
#include <Modloader/app/structs/CrashContext_Data.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrashContext_Data.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
