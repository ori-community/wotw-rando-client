#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrantedItemInstance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrantedItemInstance_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantedItemInstance_DEFINED)
#include <Modloader/app/structs/GrantedItemInstance__Fields.h>
#if defined(IL2CPP_STRUCT_GrantedItemInstance__Fields_DEFINED)
#define IL2CPP_STRUCT_GrantedItemInstance_DEFINED
struct GrantedItemInstance__Class;
struct GrantedItemInstance {
    struct GrantedItemInstance__Class* klass;
    MonitorData* monitor;
    struct GrantedItemInstance__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrantedItemInstance_FWDDECL)
#define IL2CPP_STRUCT_GrantedItemInstance_FWDDECL
#include <Modloader/app/structs/GrantedItemInstance__Class.h>
#endif
#undef IL2CPP_STRUCT_GrantedItemInstance_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantedItemInstance_DEFINED) && !defined(IL2CPP_STRUCT_GrantedItemInstance_FWDDECL)
#include <Modloader/app/structs/GrantedItemInstance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrantedItemInstance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
