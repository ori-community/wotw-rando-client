#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicUtils_DEFINED)
#define IL2CPP_STRUCT_DynamicUtils_DEFINED
struct DynamicUtils__Class;
struct DynamicUtils {
    struct DynamicUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicUtils_FWDDECL)
#define IL2CPP_STRUCT_DynamicUtils_FWDDECL
#include <Modloader/app/structs/DynamicUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicUtils_DEFINED) && !defined(IL2CPP_STRUCT_DynamicUtils_FWDDECL)
#include <Modloader/app/structs/DynamicUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
