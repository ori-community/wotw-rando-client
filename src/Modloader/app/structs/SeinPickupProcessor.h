#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPickupProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPickupProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor_DEFINED)
#include <Modloader/app/structs/SeinPickupProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_SeinPickupProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPickupProcessor_DEFINED
struct SeinPickupProcessor__Class;
struct SeinPickupProcessor {
    struct SeinPickupProcessor__Class* klass;
    MonitorData* monitor;
    struct SeinPickupProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor_FWDDECL)
#define IL2CPP_STRUCT_SeinPickupProcessor_FWDDECL
#include <Modloader/app/structs/SeinPickupProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinPickupProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor_DEFINED) && !defined(IL2CPP_STRUCT_SeinPickupProcessor_FWDDECL)
#include <Modloader/app/structs/SeinPickupProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPickupProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
