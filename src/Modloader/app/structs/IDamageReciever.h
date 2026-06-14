#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDamageReciever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDamageReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDamageReciever_DEFINED)
#define IL2CPP_STRUCT_IDamageReciever_DEFINED
struct IDamageReciever__Class;
struct IDamageReciever {
    struct IDamageReciever__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDamageReciever_FWDDECL)
#define IL2CPP_STRUCT_IDamageReciever_FWDDECL
#include <Modloader/app/structs/IDamageReciever__Class.h>
#endif
#undef IL2CPP_STRUCT_IDamageReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDamageReciever_DEFINED) && !defined(IL2CPP_STRUCT_IDamageReciever_FWDDECL)
#include <Modloader/app/structs/IDamageReciever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDamageReciever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
