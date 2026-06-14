#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartSparkEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartSparkEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSparkEffect_DEFINED)
#include <Modloader/app/structs/CartSparkEffect__Fields.h>
#if defined(IL2CPP_STRUCT_CartSparkEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_CartSparkEffect_DEFINED
struct CartSparkEffect__Class;
struct CartSparkEffect {
    struct CartSparkEffect__Class* klass;
    MonitorData* monitor;
    struct CartSparkEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartSparkEffect_FWDDECL)
#define IL2CPP_STRUCT_CartSparkEffect_FWDDECL
#include <Modloader/app/structs/CartSparkEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_CartSparkEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSparkEffect_DEFINED) && !defined(IL2CPP_STRUCT_CartSparkEffect_FWDDECL)
#include <Modloader/app/structs/CartSparkEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartSparkEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
