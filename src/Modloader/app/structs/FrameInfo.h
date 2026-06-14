#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameInfo_DEFINED)
#include <Modloader/app/structs/FrameInfo__Fields.h>
#if defined(IL2CPP_STRUCT_FrameInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameInfo_DEFINED
struct FrameInfo__Class;
struct FrameInfo {
    struct FrameInfo__Class* klass;
    MonitorData* monitor;
    struct FrameInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameInfo_FWDDECL)
#define IL2CPP_STRUCT_FrameInfo_FWDDECL
#include <Modloader/app/structs/FrameInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameInfo_DEFINED) && !defined(IL2CPP_STRUCT_FrameInfo_FWDDECL)
#include <Modloader/app/structs/FrameInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
