#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnCollisionStay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnCollisionStay_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionStay_DEFINED)
#include <Modloader/app/structs/OnCollisionStay__Fields.h>
#if defined(IL2CPP_STRUCT_OnCollisionStay__Fields_DEFINED)
#define IL2CPP_STRUCT_OnCollisionStay_DEFINED
struct OnCollisionStay__Class;
struct OnCollisionStay {
    struct OnCollisionStay__Class* klass;
    MonitorData* monitor;
    struct OnCollisionStay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnCollisionStay_FWDDECL)
#define IL2CPP_STRUCT_OnCollisionStay_FWDDECL
#include <Modloader/app/structs/OnCollisionStay__Class.h>
#endif
#undef IL2CPP_STRUCT_OnCollisionStay_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionStay_DEFINED) && !defined(IL2CPP_STRUCT_OnCollisionStay_FWDDECL)
#include <Modloader/app/structs/OnCollisionStay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnCollisionStay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
