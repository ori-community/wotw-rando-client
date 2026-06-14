#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaskGenerationMethod_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaskGenerationMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskGenerationMethod_DEFINED)
#define IL2CPP_STRUCT_MaskGenerationMethod_DEFINED
struct MaskGenerationMethod__Class;
struct MaskGenerationMethod {
    struct MaskGenerationMethod__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MaskGenerationMethod_FWDDECL)
#define IL2CPP_STRUCT_MaskGenerationMethod_FWDDECL
#include <Modloader/app/structs/MaskGenerationMethod__Class.h>
#endif
#undef IL2CPP_STRUCT_MaskGenerationMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaskGenerationMethod_DEFINED) && !defined(IL2CPP_STRUCT_MaskGenerationMethod_FWDDECL)
#include <Modloader/app/structs/MaskGenerationMethod.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaskGenerationMethod.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
