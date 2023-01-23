#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityWebRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityWebRequest_DEFINED)
#include <Modloader/app/structs/UnityWebRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UnityWebRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityWebRequest_DEFINED
struct UnityWebRequest__Class;
struct UnityWebRequest {
    struct UnityWebRequest__Class* klass;
    MonitorData* monitor;
    struct UnityWebRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityWebRequest_FWDDECL)
#define IL2CPP_STRUCT_UnityWebRequest_FWDDECL
#include <Modloader/app/structs/UnityWebRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityWebRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityWebRequest_DEFINED) && !defined(IL2CPP_STRUCT_UnityWebRequest_FWDDECL)
#include <Modloader/app/structs/UnityWebRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityWebRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
