#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderInput_DEFINED)
#define IL2CPP_STRUCT_RecorderInput_DEFINED
struct RecorderInput__Class;
struct RecorderInput {
    struct RecorderInput__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RecorderInput_FWDDECL)
#define IL2CPP_STRUCT_RecorderInput_FWDDECL
#include <Modloader/app/structs/RecorderInput__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderInput_DEFINED) && !defined(IL2CPP_STRUCT_RecorderInput_FWDDECL)
#include <Modloader/app/structs/RecorderInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
