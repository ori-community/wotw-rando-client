#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateException_DEFINED)
#include <Modloader/app/structs/UberStateException__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateException__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateException_DEFINED
struct UberStateException__Class;
struct UberStateException {
    struct UberStateException__Class* klass;
    MonitorData* monitor;
    struct UberStateException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateException_FWDDECL)
#define IL2CPP_STRUCT_UberStateException_FWDDECL
#include <Modloader/app/structs/UberStateException__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateException_DEFINED) && !defined(IL2CPP_STRUCT_UberStateException_FWDDECL)
#include <Modloader/app/structs/UberStateException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
