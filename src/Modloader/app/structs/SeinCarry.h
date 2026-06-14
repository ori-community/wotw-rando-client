#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCarry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCarry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCarry_DEFINED)
#include <Modloader/app/structs/SeinCarry__Fields.h>
#if defined(IL2CPP_STRUCT_SeinCarry__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinCarry_DEFINED
struct SeinCarry__Class;
struct SeinCarry {
    struct SeinCarry__Class* klass;
    MonitorData* monitor;
    struct SeinCarry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinCarry_FWDDECL)
#define IL2CPP_STRUCT_SeinCarry_FWDDECL
#include <Modloader/app/structs/SeinCarry__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinCarry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCarry_DEFINED) && !defined(IL2CPP_STRUCT_SeinCarry_FWDDECL)
#include <Modloader/app/structs/SeinCarry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCarry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
