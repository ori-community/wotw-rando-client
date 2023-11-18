#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverridableFloatProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverridableFloatProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableFloatProperty_DEFINED)
#include <Modloader/app/structs/OverridableFloatProperty__Fields.h>
#if defined(IL2CPP_STRUCT_OverridableFloatProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_OverridableFloatProperty_DEFINED
struct OverridableFloatProperty__Class;
struct OverridableFloatProperty {
    struct OverridableFloatProperty__Class* klass;
    MonitorData* monitor;
    struct OverridableFloatProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverridableFloatProperty_FWDDECL)
#define IL2CPP_STRUCT_OverridableFloatProperty_FWDDECL
#include <Modloader/app/structs/OverridableFloatProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_OverridableFloatProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableFloatProperty_DEFINED) && !defined(IL2CPP_STRUCT_OverridableFloatProperty_FWDDECL)
#include <Modloader/app/structs/OverridableFloatProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverridableFloatProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
