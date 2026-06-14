#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoxCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoxCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoxCollider_DEFINED)
#include <Modloader/app/structs/BoxCollider__Fields.h>
#if defined(IL2CPP_STRUCT_BoxCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_BoxCollider_DEFINED
struct BoxCollider__Class;
struct BoxCollider {
    struct BoxCollider__Class* klass;
    MonitorData* monitor;
    struct BoxCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoxCollider_FWDDECL)
#define IL2CPP_STRUCT_BoxCollider_FWDDECL
#include <Modloader/app/structs/BoxCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_BoxCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoxCollider_DEFINED) && !defined(IL2CPP_STRUCT_BoxCollider_FWDDECL)
#include <Modloader/app/structs/BoxCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoxCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
