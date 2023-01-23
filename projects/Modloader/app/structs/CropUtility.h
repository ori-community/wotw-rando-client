#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CropUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CropUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_CropUtility_DEFINED)
#define IL2CPP_STRUCT_CropUtility_DEFINED
struct CropUtility__Class;
struct CropUtility {
    struct CropUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CropUtility_FWDDECL)
#define IL2CPP_STRUCT_CropUtility_FWDDECL
#include <Modloader/app/structs/CropUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_CropUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_CropUtility_DEFINED) && !defined(IL2CPP_STRUCT_CropUtility_FWDDECL)
#include <Modloader/app/structs/CropUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CropUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
