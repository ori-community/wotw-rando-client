#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderFrame_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderFrame_DEFINED)
#include <Modloader/app/structs/RecorderFrame__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderFrame__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderFrame_DEFINED
struct RecorderFrame__Class;
struct RecorderFrame {
    struct RecorderFrame__Class* klass;
    MonitorData* monitor;
    struct RecorderFrame__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderFrame_FWDDECL)
#define IL2CPP_STRUCT_RecorderFrame_FWDDECL
#include <Modloader/app/structs/RecorderFrame__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderFrame_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderFrame_DEFINED) && !defined(IL2CPP_STRUCT_RecorderFrame_FWDDECL)
#include <Modloader/app/structs/RecorderFrame.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderFrame.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
