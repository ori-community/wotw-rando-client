#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabyWormWater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabyWormWater_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWormWater_DEFINED)
#include <Modloader/app/structs/BabyWormWater__Fields.h>
#if defined(IL2CPP_STRUCT_BabyWormWater__Fields_DEFINED)
#define IL2CPP_STRUCT_BabyWormWater_DEFINED
struct BabyWormWater__Class;
struct BabyWormWater {
    struct BabyWormWater__Class* klass;
    MonitorData* monitor;
    struct BabyWormWater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabyWormWater_FWDDECL)
#define IL2CPP_STRUCT_BabyWormWater_FWDDECL
#include <Modloader/app/structs/BabyWormWater__Class.h>
#endif
#undef IL2CPP_STRUCT_BabyWormWater_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWormWater_DEFINED) && !defined(IL2CPP_STRUCT_BabyWormWater_FWDDECL)
#include <Modloader/app/structs/BabyWormWater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabyWormWater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
