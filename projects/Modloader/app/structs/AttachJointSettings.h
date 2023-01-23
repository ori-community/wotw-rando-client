#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttachJointSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttachJointSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachJointSettings_DEFINED)
#include <Modloader/app/structs/AttachJointSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AttachJointSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AttachJointSettings_DEFINED
struct AttachJointSettings__Class;
struct AttachJointSettings {
    struct AttachJointSettings__Class* klass;
    MonitorData* monitor;
    struct AttachJointSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttachJointSettings_FWDDECL)
#define IL2CPP_STRUCT_AttachJointSettings_FWDDECL
#include <Modloader/app/structs/AttachJointSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AttachJointSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttachJointSettings_DEFINED) && !defined(IL2CPP_STRUCT_AttachJointSettings_FWDDECL)
#include <Modloader/app/structs/AttachJointSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttachJointSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
