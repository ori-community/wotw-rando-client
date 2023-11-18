#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabyWorm_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabyWorm_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWorm_DEFINED)
#include <Modloader/app/structs/BabyWorm__Fields.h>
#if defined(IL2CPP_STRUCT_BabyWorm__Fields_DEFINED)
#define IL2CPP_STRUCT_BabyWorm_DEFINED
struct BabyWorm__Class;
struct BabyWorm {
    struct BabyWorm__Class* klass;
    MonitorData* monitor;
    struct BabyWorm__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabyWorm_FWDDECL)
#define IL2CPP_STRUCT_BabyWorm_FWDDECL
#include <Modloader/app/structs/BabyWorm__Class.h>
#endif
#undef IL2CPP_STRUCT_BabyWorm_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabyWorm_DEFINED) && !defined(IL2CPP_STRUCT_BabyWorm_FWDDECL)
#include <Modloader/app/structs/BabyWorm.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabyWorm.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
