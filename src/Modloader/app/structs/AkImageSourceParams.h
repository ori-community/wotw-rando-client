#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkImageSourceParams_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkImageSourceParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkImageSourceParams_DEFINED)
#include <Modloader/app/structs/AkImageSourceParams__Fields.h>
#if defined(IL2CPP_STRUCT_AkImageSourceParams__Fields_DEFINED)
#define IL2CPP_STRUCT_AkImageSourceParams_DEFINED
struct AkImageSourceParams__Class;
struct AkImageSourceParams {
    struct AkImageSourceParams__Class* klass;
    MonitorData* monitor;
    struct AkImageSourceParams__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkImageSourceParams_FWDDECL)
#define IL2CPP_STRUCT_AkImageSourceParams_FWDDECL
#include <Modloader/app/structs/AkImageSourceParams__Class.h>
#endif
#undef IL2CPP_STRUCT_AkImageSourceParams_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkImageSourceParams_DEFINED) && !defined(IL2CPP_STRUCT_AkImageSourceParams_FWDDECL)
#include <Modloader/app/structs/AkImageSourceParams.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkImageSourceParams.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
