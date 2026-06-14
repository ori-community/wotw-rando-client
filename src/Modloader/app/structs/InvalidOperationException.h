#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvalidOperationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvalidOperationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidOperationException_DEFINED)
#include <Modloader/app/structs/InvalidOperationException__Fields.h>
#if defined(IL2CPP_STRUCT_InvalidOperationException__Fields_DEFINED)
#define IL2CPP_STRUCT_InvalidOperationException_DEFINED
struct InvalidOperationException__Class;
struct InvalidOperationException {
    struct InvalidOperationException__Class* klass;
    MonitorData* monitor;
    struct InvalidOperationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvalidOperationException_FWDDECL)
#define IL2CPP_STRUCT_InvalidOperationException_FWDDECL
#include <Modloader/app/structs/InvalidOperationException__Class.h>
#endif
#undef IL2CPP_STRUCT_InvalidOperationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidOperationException_DEFINED) && !defined(IL2CPP_STRUCT_InvalidOperationException_FWDDECL)
#include <Modloader/app/structs/InvalidOperationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvalidOperationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
