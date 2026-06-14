#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInput_DEFINED)
#include <Modloader/app/structs/SeinInput__Fields.h>
#if defined(IL2CPP_STRUCT_SeinInput__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinInput_DEFINED
struct SeinInput__Class;
struct SeinInput {
    struct SeinInput__Class* klass;
    MonitorData* monitor;
    struct SeinInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInput_FWDDECL)
#define IL2CPP_STRUCT_SeinInput_FWDDECL
#include <Modloader/app/structs/SeinInput__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInput_DEFINED) && !defined(IL2CPP_STRUCT_SeinInput_FWDDECL)
#include <Modloader/app/structs/SeinInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
