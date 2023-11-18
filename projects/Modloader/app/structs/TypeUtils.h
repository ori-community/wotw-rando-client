#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeUtils_DEFINED)
#define IL2CPP_STRUCT_TypeUtils_DEFINED
struct TypeUtils__Class;
struct TypeUtils {
    struct TypeUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeUtils_FWDDECL)
#define IL2CPP_STRUCT_TypeUtils_FWDDECL
#include <Modloader/app/structs/TypeUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeUtils_DEFINED) && !defined(IL2CPP_STRUCT_TypeUtils_FWDDECL)
#include <Modloader/app/structs/TypeUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
