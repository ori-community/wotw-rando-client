#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NormalizationTableUtil_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NormalizationTableUtil_INITIALIZING
#if !defined(IL2CPP_STRUCT_NormalizationTableUtil_DEFINED)
#define IL2CPP_STRUCT_NormalizationTableUtil_DEFINED
struct NormalizationTableUtil__Class;
struct NormalizationTableUtil {
    struct NormalizationTableUtil__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NormalizationTableUtil_FWDDECL)
#define IL2CPP_STRUCT_NormalizationTableUtil_FWDDECL
#include <Modloader/app/structs/NormalizationTableUtil__Class.h>
#endif
#undef IL2CPP_STRUCT_NormalizationTableUtil_INITIALIZING
#if !defined(IL2CPP_STRUCT_NormalizationTableUtil_DEFINED) && !defined(IL2CPP_STRUCT_NormalizationTableUtil_FWDDECL)
#include <Modloader/app/structs/NormalizationTableUtil.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NormalizationTableUtil.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
