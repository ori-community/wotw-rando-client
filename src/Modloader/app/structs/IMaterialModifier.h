#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMaterialModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMaterialModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMaterialModifier_DEFINED)
#define IL2CPP_STRUCT_IMaterialModifier_DEFINED
struct IMaterialModifier__Class;
struct IMaterialModifier {
    struct IMaterialModifier__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMaterialModifier_FWDDECL)
#define IL2CPP_STRUCT_IMaterialModifier_FWDDECL
#include <Modloader/app/structs/IMaterialModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_IMaterialModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMaterialModifier_DEFINED) && !defined(IL2CPP_STRUCT_IMaterialModifier_FWDDECL)
#include <Modloader/app/structs/IMaterialModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMaterialModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
