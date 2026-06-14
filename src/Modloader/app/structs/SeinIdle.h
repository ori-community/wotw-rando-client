#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinIdle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinIdle_DEFINED)
#include <Modloader/app/structs/SeinIdle__Fields.h>
#if defined(IL2CPP_STRUCT_SeinIdle__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinIdle_DEFINED
struct SeinIdle__Class;
struct SeinIdle {
    struct SeinIdle__Class* klass;
    MonitorData* monitor;
    struct SeinIdle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinIdle_FWDDECL)
#define IL2CPP_STRUCT_SeinIdle_FWDDECL
#include <Modloader/app/structs/SeinIdle__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinIdle_DEFINED) && !defined(IL2CPP_STRUCT_SeinIdle_FWDDECL)
#include <Modloader/app/structs/SeinIdle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinIdle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
