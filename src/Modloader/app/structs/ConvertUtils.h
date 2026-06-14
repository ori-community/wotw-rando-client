#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConvertUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConvertUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConvertUtils_DEFINED)
#define IL2CPP_STRUCT_ConvertUtils_DEFINED
struct ConvertUtils__Class;
struct ConvertUtils {
    struct ConvertUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConvertUtils_FWDDECL)
#define IL2CPP_STRUCT_ConvertUtils_FWDDECL
#include <Modloader/app/structs/ConvertUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_ConvertUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConvertUtils_DEFINED) && !defined(IL2CPP_STRUCT_ConvertUtils_FWDDECL)
#include <Modloader/app/structs/ConvertUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConvertUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
