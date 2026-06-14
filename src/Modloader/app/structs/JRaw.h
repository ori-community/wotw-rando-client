#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JRaw_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JRaw_INITIALIZING
#if !defined(IL2CPP_STRUCT_JRaw_DEFINED)
#include <Modloader/app/structs/JRaw__Fields.h>
#if defined(IL2CPP_STRUCT_JRaw__Fields_DEFINED)
#define IL2CPP_STRUCT_JRaw_DEFINED
struct JRaw__Class;
struct JRaw {
    struct JRaw__Class* klass;
    MonitorData* monitor;
    struct JRaw__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JRaw_FWDDECL)
#define IL2CPP_STRUCT_JRaw_FWDDECL
#include <Modloader/app/structs/JRaw__Class.h>
#endif
#undef IL2CPP_STRUCT_JRaw_INITIALIZING
#if !defined(IL2CPP_STRUCT_JRaw_DEFINED) && !defined(IL2CPP_STRUCT_JRaw_FWDDECL)
#include <Modloader/app/structs/JRaw.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JRaw.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
