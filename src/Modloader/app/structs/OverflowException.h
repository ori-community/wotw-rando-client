#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverflowException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverflowException_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverflowException_DEFINED)
#include <Modloader/app/structs/OverflowException__Fields.h>
#if defined(IL2CPP_STRUCT_OverflowException__Fields_DEFINED)
#define IL2CPP_STRUCT_OverflowException_DEFINED
struct OverflowException__Class;
struct OverflowException {
    struct OverflowException__Class* klass;
    MonitorData* monitor;
    struct OverflowException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverflowException_FWDDECL)
#define IL2CPP_STRUCT_OverflowException_FWDDECL
#include <Modloader/app/structs/OverflowException__Class.h>
#endif
#undef IL2CPP_STRUCT_OverflowException_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverflowException_DEFINED) && !defined(IL2CPP_STRUCT_OverflowException_FWDDECL)
#include <Modloader/app/structs/OverflowException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverflowException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
