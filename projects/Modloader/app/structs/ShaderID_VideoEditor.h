#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShaderID_VideoEditor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShaderID_VideoEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_VideoEditor_DEFINED)
#define IL2CPP_STRUCT_ShaderID_VideoEditor_DEFINED
struct ShaderID_VideoEditor__Class;
struct ShaderID_VideoEditor {
    struct ShaderID_VideoEditor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ShaderID_VideoEditor_FWDDECL)
#define IL2CPP_STRUCT_ShaderID_VideoEditor_FWDDECL
#include <Modloader/app/structs/ShaderID_VideoEditor__Class.h>
#endif
#undef IL2CPP_STRUCT_ShaderID_VideoEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShaderID_VideoEditor_DEFINED) && !defined(IL2CPP_STRUCT_ShaderID_VideoEditor_FWDDECL)
#include <Modloader/app/structs/ShaderID_VideoEditor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShaderID_VideoEditor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
