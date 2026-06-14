#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvalidCastException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvalidCastException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidCastException_DEFINED)
#include <Modloader/app/structs/InvalidCastException__Fields.h>
#if defined(IL2CPP_STRUCT_InvalidCastException__Fields_DEFINED)
#define IL2CPP_STRUCT_InvalidCastException_DEFINED
struct InvalidCastException__Class;
struct InvalidCastException {
    struct InvalidCastException__Class* klass;
    MonitorData* monitor;
    struct InvalidCastException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvalidCastException_FWDDECL)
#define IL2CPP_STRUCT_InvalidCastException_FWDDECL
#include <Modloader/app/structs/InvalidCastException__Class.h>
#endif
#undef IL2CPP_STRUCT_InvalidCastException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidCastException_DEFINED) && !defined(IL2CPP_STRUCT_InvalidCastException_FWDDECL)
#include <Modloader/app/structs/InvalidCastException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvalidCastException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
