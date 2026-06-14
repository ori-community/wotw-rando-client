#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_RadialBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_RadialBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_RadialBlur_DEFINED)
#include <Modloader/app/structs/CC_RadialBlur__Fields.h>
#if defined(IL2CPP_STRUCT_CC_RadialBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_RadialBlur_DEFINED
struct CC_RadialBlur__Class;
struct CC_RadialBlur {
    struct CC_RadialBlur__Class* klass;
    MonitorData* monitor;
    struct CC_RadialBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_RadialBlur_FWDDECL)
#define IL2CPP_STRUCT_CC_RadialBlur_FWDDECL
#include <Modloader/app/structs/CC_RadialBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_RadialBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_RadialBlur_DEFINED) && !defined(IL2CPP_STRUCT_CC_RadialBlur_FWDDECL)
#include <Modloader/app/structs/CC_RadialBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_RadialBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
