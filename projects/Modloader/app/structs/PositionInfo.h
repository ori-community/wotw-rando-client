#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionInfo_DEFINED)
#define IL2CPP_STRUCT_PositionInfo_DEFINED
struct PositionInfo__Class;
struct PositionInfo {
    struct PositionInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PositionInfo_FWDDECL)
#define IL2CPP_STRUCT_PositionInfo_FWDDECL
#include <Modloader/app/structs/PositionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_PositionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionInfo_DEFINED) && !defined(IL2CPP_STRUCT_PositionInfo_FWDDECL)
#include <Modloader/app/structs/PositionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
