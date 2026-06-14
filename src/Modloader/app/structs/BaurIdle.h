#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaurIdle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaurIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurIdle_DEFINED)
#include <Modloader/app/structs/BaurIdle__Fields.h>
#if defined(IL2CPP_STRUCT_BaurIdle__Fields_DEFINED)
#define IL2CPP_STRUCT_BaurIdle_DEFINED
struct BaurIdle__Class;
struct BaurIdle {
    struct BaurIdle__Class* klass;
    MonitorData* monitor;
    struct BaurIdle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaurIdle_FWDDECL)
#define IL2CPP_STRUCT_BaurIdle_FWDDECL
#include <Modloader/app/structs/BaurIdle__Class.h>
#endif
#undef IL2CPP_STRUCT_BaurIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurIdle_DEFINED) && !defined(IL2CPP_STRUCT_BaurIdle_FWDDECL)
#include <Modloader/app/structs/BaurIdle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaurIdle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
