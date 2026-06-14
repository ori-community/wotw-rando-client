#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumUtils_DEFINED)
#define IL2CPP_STRUCT_EnumUtils_DEFINED
struct EnumUtils__Class;
struct EnumUtils {
    struct EnumUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumUtils_FWDDECL)
#define IL2CPP_STRUCT_EnumUtils_FWDDECL
#include <Modloader/app/structs/EnumUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumUtils_DEFINED) && !defined(IL2CPP_STRUCT_EnumUtils_FWDDECL)
#include <Modloader/app/structs/EnumUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
