#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcidSlugState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcidSlugState_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugState_DEFINED)
#include <Modloader/app/structs/AcidSlugState__Fields.h>
#if defined(IL2CPP_STRUCT_AcidSlugState__Fields_DEFINED)
#define IL2CPP_STRUCT_AcidSlugState_DEFINED
struct AcidSlugState__Class;
struct AcidSlugState {
    struct AcidSlugState__Class* klass;
    MonitorData* monitor;
    struct AcidSlugState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AcidSlugState_FWDDECL)
#define IL2CPP_STRUCT_AcidSlugState_FWDDECL
#include <Modloader/app/structs/AcidSlugState__Class.h>
#endif
#undef IL2CPP_STRUCT_AcidSlugState_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugState_DEFINED) && !defined(IL2CPP_STRUCT_AcidSlugState_FWDDECL)
#include <Modloader/app/structs/AcidSlugState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcidSlugState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
