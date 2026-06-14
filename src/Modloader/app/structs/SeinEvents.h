#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents_DEFINED)
#define IL2CPP_STRUCT_SeinEvents_DEFINED
struct SeinEvents__Class;
struct SeinEvents {
    struct SeinEvents__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinEvents_FWDDECL)
#define IL2CPP_STRUCT_SeinEvents_FWDDECL
#include <Modloader/app/structs/SeinEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEvents_DEFINED) && !defined(IL2CPP_STRUCT_SeinEvents_FWDDECL)
#include <Modloader/app/structs/SeinEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
