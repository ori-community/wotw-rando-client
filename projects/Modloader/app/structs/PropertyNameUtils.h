#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyNameUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyNameUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyNameUtils_DEFINED)
#define IL2CPP_STRUCT_PropertyNameUtils_DEFINED
struct PropertyNameUtils__Class;
struct PropertyNameUtils {
    struct PropertyNameUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PropertyNameUtils_FWDDECL)
#define IL2CPP_STRUCT_PropertyNameUtils_FWDDECL
#include <Modloader/app/structs/PropertyNameUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyNameUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyNameUtils_DEFINED) && !defined(IL2CPP_STRUCT_PropertyNameUtils_FWDDECL)
#include <Modloader/app/structs/PropertyNameUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyNameUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
