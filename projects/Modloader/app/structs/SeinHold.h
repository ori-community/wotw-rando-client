#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinHold_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinHold_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHold_DEFINED)
#include <Modloader/app/structs/SeinHold__Fields.h>
#if defined(IL2CPP_STRUCT_SeinHold__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinHold_DEFINED
struct SeinHold__Class;
struct SeinHold {
    struct SeinHold__Class* klass;
    MonitorData* monitor;
    struct SeinHold__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinHold_FWDDECL)
#define IL2CPP_STRUCT_SeinHold_FWDDECL
#include <Modloader/app/structs/SeinHold__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinHold_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHold_DEFINED) && !defined(IL2CPP_STRUCT_SeinHold_FWDDECL)
#include <Modloader/app/structs/SeinHold.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinHold.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
