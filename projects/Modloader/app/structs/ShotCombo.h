#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShotCombo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShotCombo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShotCombo_DEFINED)
#include <Modloader/app/structs/ShotCombo__Fields.h>
#if defined(IL2CPP_STRUCT_ShotCombo__Fields_DEFINED)
#define IL2CPP_STRUCT_ShotCombo_DEFINED
struct ShotCombo__Class;
struct ShotCombo {
    struct ShotCombo__Class* klass;
    MonitorData* monitor;
    struct ShotCombo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShotCombo_FWDDECL)
#define IL2CPP_STRUCT_ShotCombo_FWDDECL
#include <Modloader/app/structs/ShotCombo__Class.h>
#endif
#undef IL2CPP_STRUCT_ShotCombo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShotCombo_DEFINED) && !defined(IL2CPP_STRUCT_ShotCombo_FWDDECL)
#include <Modloader/app/structs/ShotCombo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShotCombo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
