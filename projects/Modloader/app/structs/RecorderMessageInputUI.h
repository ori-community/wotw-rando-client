#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderMessageInputUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderMessageInputUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessageInputUI_DEFINED)
#include <Modloader/app/structs/RecorderMessageInputUI__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderMessageInputUI__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderMessageInputUI_DEFINED
struct RecorderMessageInputUI__Class;
struct RecorderMessageInputUI {
    struct RecorderMessageInputUI__Class* klass;
    MonitorData* monitor;
    struct RecorderMessageInputUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderMessageInputUI_FWDDECL)
#define IL2CPP_STRUCT_RecorderMessageInputUI_FWDDECL
#include <Modloader/app/structs/RecorderMessageInputUI__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderMessageInputUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessageInputUI_DEFINED) && !defined(IL2CPP_STRUCT_RecorderMessageInputUI_FWDDECL)
#include <Modloader/app/structs/RecorderMessageInputUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderMessageInputUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
