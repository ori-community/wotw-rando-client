#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FABRIK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FABRIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_FABRIK_DEFINED)
#include <Modloader/app/structs/FABRIK__Fields.h>
#if defined(IL2CPP_STRUCT_FABRIK__Fields_DEFINED)
#define IL2CPP_STRUCT_FABRIK_DEFINED
struct FABRIK__Class;
struct FABRIK {
    struct FABRIK__Class* klass;
    MonitorData* monitor;
    struct FABRIK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FABRIK_FWDDECL)
#define IL2CPP_STRUCT_FABRIK_FWDDECL
#include <Modloader/app/structs/FABRIK__Class.h>
#endif
#undef IL2CPP_STRUCT_FABRIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_FABRIK_DEFINED) && !defined(IL2CPP_STRUCT_FABRIK_FWDDECL)
#include <Modloader/app/structs/FABRIK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FABRIK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
