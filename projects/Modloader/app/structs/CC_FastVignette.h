#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_FastVignette_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_FastVignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_FastVignette_DEFINED)
#include <Modloader/app/structs/CC_FastVignette__Fields.h>
#if defined(IL2CPP_STRUCT_CC_FastVignette__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_FastVignette_DEFINED
struct CC_FastVignette__Class;
struct CC_FastVignette {
    struct CC_FastVignette__Class* klass;
    MonitorData* monitor;
    struct CC_FastVignette__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_FastVignette_FWDDECL)
#define IL2CPP_STRUCT_CC_FastVignette_FWDDECL
#include <Modloader/app/structs/CC_FastVignette__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_FastVignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_FastVignette_DEFINED) && !defined(IL2CPP_STRUCT_CC_FastVignette_FWDDECL)
#include <Modloader/app/structs/CC_FastVignette.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_FastVignette.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
