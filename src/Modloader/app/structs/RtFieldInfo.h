#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RtFieldInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RtFieldInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RtFieldInfo_DEFINED)
#define IL2CPP_STRUCT_RtFieldInfo_DEFINED
struct RtFieldInfo__Class;
struct RtFieldInfo {
    struct RtFieldInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RtFieldInfo_FWDDECL)
#define IL2CPP_STRUCT_RtFieldInfo_FWDDECL
#include <Modloader/app/structs/RtFieldInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_RtFieldInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RtFieldInfo_DEFINED) && !defined(IL2CPP_STRUCT_RtFieldInfo_FWDDECL)
#include <Modloader/app/structs/RtFieldInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RtFieldInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
