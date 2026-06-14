#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Atlas_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Atlas_INITIALIZING
#if !defined(IL2CPP_STRUCT_Atlas_DEFINED)
#include <Modloader/app/structs/Atlas__Fields.h>
#if defined(IL2CPP_STRUCT_Atlas__Fields_DEFINED)
#define IL2CPP_STRUCT_Atlas_DEFINED
struct Atlas__Class;
struct Atlas {
    struct Atlas__Class* klass;
    MonitorData* monitor;
    struct Atlas__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Atlas_FWDDECL)
#define IL2CPP_STRUCT_Atlas_FWDDECL
#include <Modloader/app/structs/Atlas__Class.h>
#endif
#undef IL2CPP_STRUCT_Atlas_INITIALIZING
#if !defined(IL2CPP_STRUCT_Atlas_DEFINED) && !defined(IL2CPP_STRUCT_Atlas_FWDDECL)
#include <Modloader/app/structs/Atlas.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Atlas.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
