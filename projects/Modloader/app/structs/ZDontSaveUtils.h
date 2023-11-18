#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZDontSaveUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZDontSaveUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZDontSaveUtils_DEFINED)
#define IL2CPP_STRUCT_ZDontSaveUtils_DEFINED
struct ZDontSaveUtils__Class;
struct ZDontSaveUtils {
    struct ZDontSaveUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ZDontSaveUtils_FWDDECL)
#define IL2CPP_STRUCT_ZDontSaveUtils_FWDDECL
#include <Modloader/app/structs/ZDontSaveUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_ZDontSaveUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZDontSaveUtils_DEFINED) && !defined(IL2CPP_STRUCT_ZDontSaveUtils_FWDDECL)
#include <Modloader/app/structs/ZDontSaveUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZDontSaveUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
