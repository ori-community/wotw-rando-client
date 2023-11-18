#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixFeet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixFeet_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixFeet_DEFINED)
#include <Modloader/app/structs/FixFeet__Fields.h>
#if defined(IL2CPP_STRUCT_FixFeet__Fields_DEFINED)
#define IL2CPP_STRUCT_FixFeet_DEFINED
struct FixFeet__Class;
struct FixFeet {
    struct FixFeet__Class* klass;
    MonitorData* monitor;
    struct FixFeet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixFeet_FWDDECL)
#define IL2CPP_STRUCT_FixFeet_FWDDECL
#include <Modloader/app/structs/FixFeet__Class.h>
#endif
#undef IL2CPP_STRUCT_FixFeet_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixFeet_DEFINED) && !defined(IL2CPP_STRUCT_FixFeet_FWDDECL)
#include <Modloader/app/structs/FixFeet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixFeet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
