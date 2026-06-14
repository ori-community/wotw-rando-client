#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapIcon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIcon_DEFINED)
#include <Modloader/app/structs/AreaMapIcon__Fields.h>
#if defined(IL2CPP_STRUCT_AreaMapIcon__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapIcon_DEFINED
struct AreaMapIcon__Class;
struct AreaMapIcon {
    struct AreaMapIcon__Class* klass;
    MonitorData* monitor;
    struct AreaMapIcon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapIcon_FWDDECL)
#define IL2CPP_STRUCT_AreaMapIcon_FWDDECL
#include <Modloader/app/structs/AreaMapIcon__Class.h>
#endif
#undef IL2CPP_STRUCT_AreaMapIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIcon_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapIcon_FWDDECL)
#include <Modloader/app/structs/AreaMapIcon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapIcon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
