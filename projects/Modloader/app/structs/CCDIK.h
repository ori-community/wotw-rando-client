#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCDIK_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCDIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCDIK_DEFINED)
#include <Modloader/app/structs/CCDIK__Fields.h>
#if defined(IL2CPP_STRUCT_CCDIK__Fields_DEFINED)
#define IL2CPP_STRUCT_CCDIK_DEFINED
struct CCDIK__Class;
struct CCDIK {
    struct CCDIK__Class* klass;
    MonitorData* monitor;
    struct CCDIK__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCDIK_FWDDECL)
#define IL2CPP_STRUCT_CCDIK_FWDDECL
#include <Modloader/app/structs/CCDIK__Class.h>
#endif
#undef IL2CPP_STRUCT_CCDIK_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCDIK_DEFINED) && !defined(IL2CPP_STRUCT_CCDIK_FWDDECL)
#include <Modloader/app/structs/CCDIK.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCDIK.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
