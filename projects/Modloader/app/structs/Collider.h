#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Collider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Collider_INITIALIZING
#if !defined(IL2CPP_STRUCT_Collider_DEFINED)
#include <Modloader/app/structs/Collider__Fields.h>
#if defined(IL2CPP_STRUCT_Collider__Fields_DEFINED)
#define IL2CPP_STRUCT_Collider_DEFINED
struct Collider__Class;
struct Collider {
    struct Collider__Class* klass;
    MonitorData* monitor;
    struct Collider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Collider_FWDDECL)
#define IL2CPP_STRUCT_Collider_FWDDECL
#include <Modloader/app/structs/Collider__Class.h>
#endif
#undef IL2CPP_STRUCT_Collider_INITIALIZING
#if !defined(IL2CPP_STRUCT_Collider_DEFINED) && !defined(IL2CPP_STRUCT_Collider_FWDDECL)
#include <Modloader/app/structs/Collider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Collider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
