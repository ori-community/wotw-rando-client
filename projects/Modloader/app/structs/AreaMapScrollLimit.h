#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapScrollLimit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapScrollLimit_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapScrollLimit_DEFINED)
#include <Modloader/app/structs/AreaMapScrollLimit__Fields.h>
#if defined(IL2CPP_STRUCT_AreaMapScrollLimit__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapScrollLimit_DEFINED
struct AreaMapScrollLimit__Class;
struct AreaMapScrollLimit {
    struct AreaMapScrollLimit__Class* klass;
    MonitorData* monitor;
    struct AreaMapScrollLimit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapScrollLimit_FWDDECL)
#define IL2CPP_STRUCT_AreaMapScrollLimit_FWDDECL
#include <Modloader/app/structs/AreaMapScrollLimit__Class.h>
#endif
#undef IL2CPP_STRUCT_AreaMapScrollLimit_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapScrollLimit_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapScrollLimit_FWDDECL)
#include <Modloader/app/structs/AreaMapScrollLimit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapScrollLimit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
