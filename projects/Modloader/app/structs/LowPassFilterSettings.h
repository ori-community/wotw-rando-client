#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LowPassFilterSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LowPassFilterSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LowPassFilterSettings_DEFINED)
#include <Modloader/app/structs/LowPassFilterSettings__Fields.h>
#if defined(IL2CPP_STRUCT_LowPassFilterSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_LowPassFilterSettings_DEFINED
struct LowPassFilterSettings__Class;
struct LowPassFilterSettings {
    struct LowPassFilterSettings__Class* klass;
    MonitorData* monitor;
    struct LowPassFilterSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LowPassFilterSettings_FWDDECL)
#define IL2CPP_STRUCT_LowPassFilterSettings_FWDDECL
#include <Modloader/app/structs/LowPassFilterSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_LowPassFilterSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LowPassFilterSettings_DEFINED) && !defined(IL2CPP_STRUCT_LowPassFilterSettings_FWDDECL)
#include <Modloader/app/structs/LowPassFilterSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LowPassFilterSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
