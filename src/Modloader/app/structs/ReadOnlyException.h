#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadOnlyException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadOnlyException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadOnlyException_DEFINED)
#include <Modloader/app/structs/ReadOnlyException__Fields.h>
#if defined(IL2CPP_STRUCT_ReadOnlyException__Fields_DEFINED)
#define IL2CPP_STRUCT_ReadOnlyException_DEFINED
struct ReadOnlyException__Class;
struct ReadOnlyException {
    struct ReadOnlyException__Class* klass;
    MonitorData* monitor;
    struct ReadOnlyException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReadOnlyException_FWDDECL)
#define IL2CPP_STRUCT_ReadOnlyException_FWDDECL
#include <Modloader/app/structs/ReadOnlyException__Class.h>
#endif
#undef IL2CPP_STRUCT_ReadOnlyException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadOnlyException_DEFINED) && !defined(IL2CPP_STRUCT_ReadOnlyException_FWDDECL)
#include <Modloader/app/structs/ReadOnlyException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadOnlyException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
