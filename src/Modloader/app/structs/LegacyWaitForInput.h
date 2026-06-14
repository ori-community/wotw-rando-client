#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyWaitForInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyWaitForInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyWaitForInput_DEFINED)
#include <Modloader/app/structs/LegacyWaitForInput__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyWaitForInput__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyWaitForInput_DEFINED
struct LegacyWaitForInput__Class;
struct LegacyWaitForInput {
    struct LegacyWaitForInput__Class* klass;
    MonitorData* monitor;
    struct LegacyWaitForInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyWaitForInput_FWDDECL)
#define IL2CPP_STRUCT_LegacyWaitForInput_FWDDECL
#include <Modloader/app/structs/LegacyWaitForInput__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyWaitForInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyWaitForInput_DEFINED) && !defined(IL2CPP_STRUCT_LegacyWaitForInput_FWDDECL)
#include <Modloader/app/structs/LegacyWaitForInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyWaitForInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
