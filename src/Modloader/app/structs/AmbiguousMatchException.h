#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbiguousMatchException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbiguousMatchException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbiguousMatchException_DEFINED)
#include <Modloader/app/structs/AmbiguousMatchException__Fields.h>
#if defined(IL2CPP_STRUCT_AmbiguousMatchException__Fields_DEFINED)
#define IL2CPP_STRUCT_AmbiguousMatchException_DEFINED
struct AmbiguousMatchException__Class;
struct AmbiguousMatchException {
    struct AmbiguousMatchException__Class* klass;
    MonitorData* monitor;
    struct AmbiguousMatchException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbiguousMatchException_FWDDECL)
#define IL2CPP_STRUCT_AmbiguousMatchException_FWDDECL
#include <Modloader/app/structs/AmbiguousMatchException__Class.h>
#endif
#undef IL2CPP_STRUCT_AmbiguousMatchException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbiguousMatchException_DEFINED) && !defined(IL2CPP_STRUCT_AmbiguousMatchException_FWDDECL)
#include <Modloader/app/structs/AmbiguousMatchException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbiguousMatchException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
