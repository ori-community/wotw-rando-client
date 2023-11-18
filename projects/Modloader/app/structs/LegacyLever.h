#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyLever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyLever_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyLever_DEFINED)
#include <Modloader/app/structs/LegacyLever__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyLever__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyLever_DEFINED
struct LegacyLever__Class;
struct LegacyLever {
    struct LegacyLever__Class* klass;
    MonitorData* monitor;
    struct LegacyLever__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyLever_FWDDECL)
#define IL2CPP_STRUCT_LegacyLever_FWDDECL
#include <Modloader/app/structs/LegacyLever__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyLever_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyLever_DEFINED) && !defined(IL2CPP_STRUCT_LegacyLever_FWDDECL)
#include <Modloader/app/structs/LegacyLever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyLever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
