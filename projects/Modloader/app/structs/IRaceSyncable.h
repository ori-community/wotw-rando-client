#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRaceSyncable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRaceSyncable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRaceSyncable_DEFINED)
#define IL2CPP_STRUCT_IRaceSyncable_DEFINED
struct IRaceSyncable__Class;
struct IRaceSyncable {
    struct IRaceSyncable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRaceSyncable_FWDDECL)
#define IL2CPP_STRUCT_IRaceSyncable_FWDDECL
#include <Modloader/app/structs/IRaceSyncable__Class.h>
#endif
#undef IL2CPP_STRUCT_IRaceSyncable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRaceSyncable_DEFINED) && !defined(IL2CPP_STRUCT_IRaceSyncable_FWDDECL)
#include <Modloader/app/structs/IRaceSyncable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRaceSyncable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
