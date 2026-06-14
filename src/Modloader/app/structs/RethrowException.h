#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RethrowException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RethrowException_INITIALIZING
#if !defined(IL2CPP_STRUCT_RethrowException_DEFINED)
#include <Modloader/app/structs/RethrowException__Fields.h>
#if defined(IL2CPP_STRUCT_RethrowException__Fields_DEFINED)
#define IL2CPP_STRUCT_RethrowException_DEFINED
struct RethrowException__Class;
struct RethrowException {
    struct RethrowException__Class* klass;
    MonitorData* monitor;
    struct RethrowException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RethrowException_FWDDECL)
#define IL2CPP_STRUCT_RethrowException_FWDDECL
#include <Modloader/app/structs/RethrowException__Class.h>
#endif
#undef IL2CPP_STRUCT_RethrowException_INITIALIZING
#if !defined(IL2CPP_STRUCT_RethrowException_DEFINED) && !defined(IL2CPP_STRUCT_RethrowException_FWDDECL)
#include <Modloader/app/structs/RethrowException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RethrowException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
