#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPlaceholder_c_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPlaceholder_c_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_c_DEFINED)
#define IL2CPP_STRUCT_EntityPlaceholder_c_DEFINED
struct EntityPlaceholder_c__Class;
struct EntityPlaceholder_c {
    struct EntityPlaceholder_c__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_c_FWDDECL)
#define IL2CPP_STRUCT_EntityPlaceholder_c_FWDDECL
#include <Modloader/app/structs/EntityPlaceholder_c__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityPlaceholder_c_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder_c_DEFINED) && !defined(IL2CPP_STRUCT_EntityPlaceholder_c_FWDDECL)
#include <Modloader/app/structs/EntityPlaceholder_c.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPlaceholder_c.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
