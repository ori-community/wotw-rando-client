#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomizeMaterial_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomizeMaterial_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomizeMaterial_DEFINED)
#include <Modloader/app/structs/CustomizeMaterial__Fields.h>
#if defined(IL2CPP_STRUCT_CustomizeMaterial__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomizeMaterial_DEFINED
struct CustomizeMaterial__Class;
struct CustomizeMaterial {
    struct CustomizeMaterial__Class* klass;
    MonitorData* monitor;
    struct CustomizeMaterial__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomizeMaterial_FWDDECL)
#define IL2CPP_STRUCT_CustomizeMaterial_FWDDECL
#include <Modloader/app/structs/CustomizeMaterial__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomizeMaterial_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomizeMaterial_DEFINED) && !defined(IL2CPP_STRUCT_CustomizeMaterial_FWDDECL)
#include <Modloader/app/structs/CustomizeMaterial.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomizeMaterial.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
