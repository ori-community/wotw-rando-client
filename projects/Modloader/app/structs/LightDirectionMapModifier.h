#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightDirectionMapModifier_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightDirectionMapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapModifier_DEFINED)
#include <Modloader/app/structs/LightDirectionMapModifier__Fields.h>
#if defined(IL2CPP_STRUCT_LightDirectionMapModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_LightDirectionMapModifier_DEFINED
struct LightDirectionMapModifier__Class;
struct LightDirectionMapModifier {
    struct LightDirectionMapModifier__Class* klass;
    MonitorData* monitor;
    struct LightDirectionMapModifier__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightDirectionMapModifier_FWDDECL)
#define IL2CPP_STRUCT_LightDirectionMapModifier_FWDDECL
#include <Modloader/app/structs/LightDirectionMapModifier__Class.h>
#endif
#undef IL2CPP_STRUCT_LightDirectionMapModifier_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapModifier_DEFINED) && !defined(IL2CPP_STRUCT_LightDirectionMapModifier_FWDDECL)
#include <Modloader/app/structs/LightDirectionMapModifier.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightDirectionMapModifier.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
