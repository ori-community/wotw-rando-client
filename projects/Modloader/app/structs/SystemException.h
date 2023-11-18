#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SystemException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SystemException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemException_DEFINED)
#include <Modloader/app/structs/SystemException__Fields.h>
#if defined(IL2CPP_STRUCT_SystemException__Fields_DEFINED)
#define IL2CPP_STRUCT_SystemException_DEFINED
struct SystemException__Class;
struct SystemException {
    struct SystemException__Class* klass;
    MonitorData* monitor;
    struct SystemException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SystemException_FWDDECL)
#define IL2CPP_STRUCT_SystemException_FWDDECL
#include <Modloader/app/structs/SystemException__Class.h>
#endif
#undef IL2CPP_STRUCT_SystemException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemException_DEFINED) && !defined(IL2CPP_STRUCT_SystemException_FWDDECL)
#include <Modloader/app/structs/SystemException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SystemException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
