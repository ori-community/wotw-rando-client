#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KnownHttpVerb_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KnownHttpVerb_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnownHttpVerb_DEFINED)
#include <Modloader/app/structs/KnownHttpVerb__Fields.h>
#if defined(IL2CPP_STRUCT_KnownHttpVerb__Fields_DEFINED)
#define IL2CPP_STRUCT_KnownHttpVerb_DEFINED
struct KnownHttpVerb__Class;
struct KnownHttpVerb {
    struct KnownHttpVerb__Class* klass;
    MonitorData* monitor;
    struct KnownHttpVerb__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KnownHttpVerb_FWDDECL)
#define IL2CPP_STRUCT_KnownHttpVerb_FWDDECL
#include <Modloader/app/structs/KnownHttpVerb__Class.h>
#endif
#undef IL2CPP_STRUCT_KnownHttpVerb_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnownHttpVerb_DEFINED) && !defined(IL2CPP_STRUCT_KnownHttpVerb_FWDDECL)
#include <Modloader/app/structs/KnownHttpVerb.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KnownHttpVerb.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
