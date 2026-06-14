#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HDRUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HDRUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_HDRUtils_DEFINED)
#define IL2CPP_STRUCT_HDRUtils_DEFINED
struct HDRUtils__Class;
struct HDRUtils {
    struct HDRUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HDRUtils_FWDDECL)
#define IL2CPP_STRUCT_HDRUtils_FWDDECL
#include <Modloader/app/structs/HDRUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_HDRUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_HDRUtils_DEFINED) && !defined(IL2CPP_STRUCT_HDRUtils_FWDDECL)
#include <Modloader/app/structs/HDRUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HDRUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
