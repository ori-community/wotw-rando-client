#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalException_DEFINED)
#include <Modloader/app/structs/InternalException__Fields.h>
#if defined(IL2CPP_STRUCT_InternalException__Fields_DEFINED)
#define IL2CPP_STRUCT_InternalException_DEFINED
struct InternalException__Class;
struct InternalException {
    struct InternalException__Class* klass;
    MonitorData* monitor;
    struct InternalException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalException_FWDDECL)
#define IL2CPP_STRUCT_InternalException_FWDDECL
#include <Modloader/app/structs/InternalException__Class.h>
#endif
#undef IL2CPP_STRUCT_InternalException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalException_DEFINED) && !defined(IL2CPP_STRUCT_InternalException_FWDDECL)
#include <Modloader/app/structs/InternalException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
