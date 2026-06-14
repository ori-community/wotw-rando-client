#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstanceCreationEditor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstanceCreationEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceCreationEditor_DEFINED)
#define IL2CPP_STRUCT_InstanceCreationEditor_DEFINED
struct InstanceCreationEditor__Class;
struct InstanceCreationEditor {
    struct InstanceCreationEditor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_InstanceCreationEditor_FWDDECL)
#define IL2CPP_STRUCT_InstanceCreationEditor_FWDDECL
#include <Modloader/app/structs/InstanceCreationEditor__Class.h>
#endif
#undef IL2CPP_STRUCT_InstanceCreationEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstanceCreationEditor_DEFINED) && !defined(IL2CPP_STRUCT_InstanceCreationEditor_FWDDECL)
#include <Modloader/app/structs/InstanceCreationEditor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstanceCreationEditor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
