#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarshalDirectiveException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarshalDirectiveException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalDirectiveException_DEFINED)
#include <Modloader/app/structs/MarshalDirectiveException__Fields.h>
#if defined(IL2CPP_STRUCT_MarshalDirectiveException__Fields_DEFINED)
#define IL2CPP_STRUCT_MarshalDirectiveException_DEFINED
struct MarshalDirectiveException__Class;
struct MarshalDirectiveException {
    struct MarshalDirectiveException__Class* klass;
    MonitorData* monitor;
    struct MarshalDirectiveException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MarshalDirectiveException_FWDDECL)
#define IL2CPP_STRUCT_MarshalDirectiveException_FWDDECL
#include <Modloader/app/structs/MarshalDirectiveException__Class.h>
#endif
#undef IL2CPP_STRUCT_MarshalDirectiveException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalDirectiveException_DEFINED) && !defined(IL2CPP_STRUCT_MarshalDirectiveException_FWDDECL)
#include <Modloader/app/structs/MarshalDirectiveException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarshalDirectiveException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
