#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyIsEditorAssembly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyIsEditorAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyIsEditorAssembly_DEFINED)
#define IL2CPP_STRUCT_AssemblyIsEditorAssembly_DEFINED
struct AssemblyIsEditorAssembly__Class;
struct AssemblyIsEditorAssembly {
    struct AssemblyIsEditorAssembly__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AssemblyIsEditorAssembly_FWDDECL)
#define IL2CPP_STRUCT_AssemblyIsEditorAssembly_FWDDECL
#include <Modloader/app/structs/AssemblyIsEditorAssembly__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyIsEditorAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyIsEditorAssembly_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyIsEditorAssembly_FWDDECL)
#include <Modloader/app/structs/AssemblyIsEditorAssembly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyIsEditorAssembly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
