#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BloodVFXPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BloodVFXPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloodVFXPair_DEFINED)
#include <Modloader/app/structs/BloodVFXPair__Fields.h>
#if defined(IL2CPP_STRUCT_BloodVFXPair__Fields_DEFINED)
#define IL2CPP_STRUCT_BloodVFXPair_DEFINED
struct BloodVFXPair__Class;
struct BloodVFXPair {
    struct BloodVFXPair__Class* klass;
    MonitorData* monitor;
    struct BloodVFXPair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BloodVFXPair_FWDDECL)
#define IL2CPP_STRUCT_BloodVFXPair_FWDDECL
#include <Modloader/app/structs/BloodVFXPair__Class.h>
#endif
#undef IL2CPP_STRUCT_BloodVFXPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloodVFXPair_DEFINED) && !defined(IL2CPP_STRUCT_BloodVFXPair_FWDDECL)
#include <Modloader/app/structs/BloodVFXPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BloodVFXPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
