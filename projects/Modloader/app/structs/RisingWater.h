#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RisingWater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RisingWater_INITIALIZING
#if !defined(IL2CPP_STRUCT_RisingWater_DEFINED)
#include <Modloader/app/structs/RisingWater__Fields.h>
#if defined(IL2CPP_STRUCT_RisingWater__Fields_DEFINED)
#define IL2CPP_STRUCT_RisingWater_DEFINED
struct RisingWater__Class;
struct RisingWater {
    struct RisingWater__Class* klass;
    MonitorData* monitor;
    struct RisingWater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RisingWater_FWDDECL)
#define IL2CPP_STRUCT_RisingWater_FWDDECL
#include <Modloader/app/structs/RisingWater__Class.h>
#endif
#undef IL2CPP_STRUCT_RisingWater_INITIALIZING
#if !defined(IL2CPP_STRUCT_RisingWater_DEFINED) && !defined(IL2CPP_STRUCT_RisingWater_FWDDECL)
#include <Modloader/app/structs/RisingWater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RisingWater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
