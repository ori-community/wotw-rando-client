#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreSection_DEFINED)
#define IL2CPP_STRUCT_IgnoreSection_DEFINED
struct IgnoreSection__Class;
struct IgnoreSection {
    struct IgnoreSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IgnoreSection_FWDDECL)
#define IL2CPP_STRUCT_IgnoreSection_FWDDECL
#include <Modloader/app/structs/IgnoreSection__Class.h>
#endif
#undef IL2CPP_STRUCT_IgnoreSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreSection_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreSection_FWDDECL)
#include <Modloader/app/structs/IgnoreSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
