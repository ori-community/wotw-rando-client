#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollapsingPlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollapsingPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingPlatform_DEFINED)
#include <Modloader/app/structs/CollapsingPlatform__Fields.h>
#if defined(IL2CPP_STRUCT_CollapsingPlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_CollapsingPlatform_DEFINED
struct CollapsingPlatform__Class;
struct CollapsingPlatform {
    struct CollapsingPlatform__Class* klass;
    MonitorData* monitor;
    struct CollapsingPlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollapsingPlatform_FWDDECL)
#define IL2CPP_STRUCT_CollapsingPlatform_FWDDECL
#include <Modloader/app/structs/CollapsingPlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_CollapsingPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollapsingPlatform_DEFINED) && !defined(IL2CPP_STRUCT_CollapsingPlatform_FWDDECL)
#include <Modloader/app/structs/CollapsingPlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollapsingPlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
