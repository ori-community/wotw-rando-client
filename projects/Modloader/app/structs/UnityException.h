#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityException_DEFINED)
#include <Modloader/app/structs/UnityException__Fields.h>
#if defined(IL2CPP_STRUCT_UnityException__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityException_DEFINED
struct UnityException__Class;
struct UnityException {
    struct UnityException__Class* klass;
    MonitorData* monitor;
    struct UnityException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityException_FWDDECL)
#define IL2CPP_STRUCT_UnityException_FWDDECL
#include <Modloader/app/structs/UnityException__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityException_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityException_DEFINED) && !defined(IL2CPP_STRUCT_UnityException_FWDDECL)
#include <Modloader/app/structs/UnityException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
