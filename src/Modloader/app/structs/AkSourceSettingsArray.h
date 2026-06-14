#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSourceSettingsArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSourceSettingsArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSourceSettingsArray_DEFINED)
#include <Modloader/app/structs/AkSourceSettingsArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkSourceSettingsArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkSourceSettingsArray_DEFINED
struct AkSourceSettingsArray__Class;
struct AkSourceSettingsArray {
    struct AkSourceSettingsArray__Class* klass;
    MonitorData* monitor;
    struct AkSourceSettingsArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkSourceSettingsArray_FWDDECL)
#define IL2CPP_STRUCT_AkSourceSettingsArray_FWDDECL
#include <Modloader/app/structs/AkSourceSettingsArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkSourceSettingsArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSourceSettingsArray_DEFINED) && !defined(IL2CPP_STRUCT_AkSourceSettingsArray_FWDDECL)
#include <Modloader/app/structs/AkSourceSettingsArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSourceSettingsArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
