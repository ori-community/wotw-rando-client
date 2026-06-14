#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_PhotoFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_PhotoFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_PhotoFilter_DEFINED)
#include <Modloader/app/structs/CC_PhotoFilter__Fields.h>
#if defined(IL2CPP_STRUCT_CC_PhotoFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_CC_PhotoFilter_DEFINED
struct CC_PhotoFilter__Class;
struct CC_PhotoFilter {
    struct CC_PhotoFilter__Class* klass;
    MonitorData* monitor;
    struct CC_PhotoFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_PhotoFilter_FWDDECL)
#define IL2CPP_STRUCT_CC_PhotoFilter_FWDDECL
#include <Modloader/app/structs/CC_PhotoFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_CC_PhotoFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_PhotoFilter_DEFINED) && !defined(IL2CPP_STRUCT_CC_PhotoFilter_FWDDECL)
#include <Modloader/app/structs/CC_PhotoFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_PhotoFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
