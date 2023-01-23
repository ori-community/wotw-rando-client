#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugValues_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugValues_DEFINED)
#include <Modloader/app/structs/DebugValues__Fields.h>
#if defined(IL2CPP_STRUCT_DebugValues__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugValues_DEFINED
struct DebugValues__Class;
struct DebugValues {
    struct DebugValues__Class* klass;
    MonitorData* monitor;
    struct DebugValues__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugValues_FWDDECL)
#define IL2CPP_STRUCT_DebugValues_FWDDECL
#include <Modloader/app/structs/DebugValues__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugValues_DEFINED) && !defined(IL2CPP_STRUCT_DebugValues_FWDDECL)
#include <Modloader/app/structs/DebugValues.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugValues.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
