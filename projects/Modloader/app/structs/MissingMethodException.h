#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MissingMethodException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MissingMethodException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MissingMethodException_DEFINED)
#include <Modloader/app/structs/MissingMethodException__Fields.h>
#if defined(IL2CPP_STRUCT_MissingMethodException__Fields_DEFINED)
#define IL2CPP_STRUCT_MissingMethodException_DEFINED
struct MissingMethodException__Class;
struct MissingMethodException {
    struct MissingMethodException__Class* klass;
    MonitorData* monitor;
    struct MissingMethodException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MissingMethodException_FWDDECL)
#define IL2CPP_STRUCT_MissingMethodException_FWDDECL
#include <Modloader/app/structs/MissingMethodException__Class.h>
#endif
#undef IL2CPP_STRUCT_MissingMethodException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MissingMethodException_DEFINED) && !defined(IL2CPP_STRUCT_MissingMethodException_FWDDECL)
#include <Modloader/app/structs/MissingMethodException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MissingMethodException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
