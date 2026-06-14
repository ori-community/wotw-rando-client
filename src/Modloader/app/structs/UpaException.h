#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpaException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpaException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpaException_DEFINED)
#include <Modloader/app/structs/UpaException__Fields.h>
#if defined(IL2CPP_STRUCT_UpaException__Fields_DEFINED)
#define IL2CPP_STRUCT_UpaException_DEFINED
struct UpaException__Class;
struct UpaException {
    struct UpaException__Class* klass;
    MonitorData* monitor;
    struct UpaException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpaException_FWDDECL)
#define IL2CPP_STRUCT_UpaException_FWDDECL
#include <Modloader/app/structs/UpaException__Class.h>
#endif
#undef IL2CPP_STRUCT_UpaException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpaException_DEFINED) && !defined(IL2CPP_STRUCT_UpaException_FWDDECL)
#include <Modloader/app/structs/UpaException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpaException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
