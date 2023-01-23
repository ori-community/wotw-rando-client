#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSettings_RemoveSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSettings_RemoveSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_RemoveSection_DEFINED)
#include <Modloader/app/structs/IVRSettings_RemoveSection__Fields.h>
#if defined(IL2CPP_STRUCT_IVRSettings_RemoveSection__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRSettings_RemoveSection_DEFINED
struct IVRSettings_RemoveSection__Class;
struct IVRSettings_RemoveSection {
    struct IVRSettings_RemoveSection__Class* klass;
    MonitorData* monitor;
    struct IVRSettings_RemoveSection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSettings_RemoveSection_FWDDECL)
#define IL2CPP_STRUCT_IVRSettings_RemoveSection_FWDDECL
#include <Modloader/app/structs/IVRSettings_RemoveSection__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSettings_RemoveSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_RemoveSection_DEFINED) && !defined(IL2CPP_STRUCT_IVRSettings_RemoveSection_FWDDECL)
#include <Modloader/app/structs/IVRSettings_RemoveSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSettings_RemoveSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
