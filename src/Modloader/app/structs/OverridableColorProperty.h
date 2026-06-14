#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverridableColorProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverridableColorProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableColorProperty_DEFINED)
#include <Modloader/app/structs/OverridableColorProperty__Fields.h>
#if defined(IL2CPP_STRUCT_OverridableColorProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_OverridableColorProperty_DEFINED
struct OverridableColorProperty__Class;
struct OverridableColorProperty {
    struct OverridableColorProperty__Class* klass;
    MonitorData* monitor;
    struct OverridableColorProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverridableColorProperty_FWDDECL)
#define IL2CPP_STRUCT_OverridableColorProperty_FWDDECL
#include <Modloader/app/structs/OverridableColorProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_OverridableColorProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableColorProperty_DEFINED) && !defined(IL2CPP_STRUCT_OverridableColorProperty_FWDDECL)
#include <Modloader/app/structs/OverridableColorProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverridableColorProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
