#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDamageContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDamageContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDamageContext_DEFINED)
#define IL2CPP_STRUCT_IDamageContext_DEFINED
struct IDamageContext__Class;
struct IDamageContext {
    struct IDamageContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDamageContext_FWDDECL)
#define IL2CPP_STRUCT_IDamageContext_FWDDECL
#include <Modloader/app/structs/IDamageContext__Class.h>
#endif
#undef IL2CPP_STRUCT_IDamageContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDamageContext_DEFINED) && !defined(IL2CPP_STRUCT_IDamageContext_FWDDECL)
#include <Modloader/app/structs/IDamageContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDamageContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
