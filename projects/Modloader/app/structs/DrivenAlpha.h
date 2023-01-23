#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivenAlpha_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivenAlpha_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenAlpha_DEFINED)
#include <Modloader/app/structs/DrivenAlpha__Fields.h>
#if defined(IL2CPP_STRUCT_DrivenAlpha__Fields_DEFINED)
#define IL2CPP_STRUCT_DrivenAlpha_DEFINED
struct DrivenAlpha__Class;
struct DrivenAlpha {
    struct DrivenAlpha__Class* klass;
    MonitorData* monitor;
    struct DrivenAlpha__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrivenAlpha_FWDDECL)
#define IL2CPP_STRUCT_DrivenAlpha_FWDDECL
#include <Modloader/app/structs/DrivenAlpha__Class.h>
#endif
#undef IL2CPP_STRUCT_DrivenAlpha_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenAlpha_DEFINED) && !defined(IL2CPP_STRUCT_DrivenAlpha_FWDDECL)
#include <Modloader/app/structs/DrivenAlpha.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivenAlpha.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
