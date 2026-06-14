#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoftCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoftCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftCollider_DEFINED)
#include <Modloader/app/structs/SoftCollider__Fields.h>
#if defined(IL2CPP_STRUCT_SoftCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_SoftCollider_DEFINED
struct SoftCollider__Class;
struct SoftCollider {
    struct SoftCollider__Class* klass;
    MonitorData* monitor;
    struct SoftCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoftCollider_FWDDECL)
#define IL2CPP_STRUCT_SoftCollider_FWDDECL
#include <Modloader/app/structs/SoftCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_SoftCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoftCollider_DEFINED) && !defined(IL2CPP_STRUCT_SoftCollider_FWDDECL)
#include <Modloader/app/structs/SoftCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoftCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
