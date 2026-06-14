#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_COMException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_COMException_INITIALIZING
#if !defined(IL2CPP_STRUCT_COMException_DEFINED)
#include <Modloader/app/structs/COMException__Fields.h>
#if defined(IL2CPP_STRUCT_COMException__Fields_DEFINED)
#define IL2CPP_STRUCT_COMException_DEFINED
struct COMException__Class;
struct COMException {
    struct COMException__Class* klass;
    MonitorData* monitor;
    struct COMException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_COMException_FWDDECL)
#define IL2CPP_STRUCT_COMException_FWDDECL
#include <Modloader/app/structs/COMException__Class.h>
#endif
#undef IL2CPP_STRUCT_COMException_INITIALIZING
#if !defined(IL2CPP_STRUCT_COMException_DEFINED) && !defined(IL2CPP_STRUCT_COMException_FWDDECL)
#include <Modloader/app/structs/COMException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/COMException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
