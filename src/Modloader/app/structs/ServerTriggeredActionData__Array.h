#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerTriggeredActionData__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerTriggeredActionData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTriggeredActionData__Array_DEFINED)
#define IL2CPP_STRUCT_ServerTriggeredActionData__Array_DEFINED
struct ServerTriggeredActionData__Array__Class;
struct ServerTriggeredActionData;
struct ServerTriggeredActionData__Array {
    struct ServerTriggeredActionData__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ServerTriggeredActionData* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_ServerTriggeredActionData__Array_FWDDECL)
#define IL2CPP_STRUCT_ServerTriggeredActionData__Array_FWDDECL
#include <Modloader/app/structs/ServerTriggeredActionData.h>
#include <Modloader/app/structs/ServerTriggeredActionData__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerTriggeredActionData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTriggeredActionData__Array_DEFINED) && !defined(IL2CPP_STRUCT_ServerTriggeredActionData__Array_FWDDECL)
#include <Modloader/app/structs/ServerTriggeredActionData__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerTriggeredActionData__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
