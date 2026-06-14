#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataLinkUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataLinkUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_DEFINED)
#define IL2CPP_STRUCT_DynamicDataLinkUtils_DEFINED
struct DynamicDataLinkUtils__Class;
struct DynamicDataLinkUtils {
    struct DynamicDataLinkUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataLinkUtils_FWDDECL
#include <Modloader/app/structs/DynamicDataLinkUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicDataLinkUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataLinkUtils_FWDDECL)
#include <Modloader/app/structs/DynamicDataLinkUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataLinkUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
