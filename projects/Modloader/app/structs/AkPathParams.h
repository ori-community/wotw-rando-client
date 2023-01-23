#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkPathParams_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkPathParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPathParams_DEFINED)
#include <Modloader/app/structs/AkPathParams__Fields.h>
#if defined(IL2CPP_STRUCT_AkPathParams__Fields_DEFINED)
#define IL2CPP_STRUCT_AkPathParams_DEFINED
struct AkPathParams__Class;
struct AkPathParams {
    struct AkPathParams__Class* klass;
    MonitorData* monitor;
    struct AkPathParams__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkPathParams_FWDDECL)
#define IL2CPP_STRUCT_AkPathParams_FWDDECL
#include <Modloader/app/structs/AkPathParams__Class.h>
#endif
#undef IL2CPP_STRUCT_AkPathParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPathParams_DEFINED) && !defined(IL2CPP_STRUCT_AkPathParams_FWDDECL)
#include <Modloader/app/structs/AkPathParams.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkPathParams.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
