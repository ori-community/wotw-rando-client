#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderIdle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderIdle_DEFINED)
#include <Modloader/app/structs/BuilderIdle__Fields.h>
#if defined(IL2CPP_STRUCT_BuilderIdle__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderIdle_DEFINED
struct BuilderIdle__Class;
struct BuilderIdle {
    struct BuilderIdle__Class* klass;
    MonitorData* monitor;
    struct BuilderIdle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderIdle_FWDDECL)
#define IL2CPP_STRUCT_BuilderIdle_FWDDECL
#include <Modloader/app/structs/BuilderIdle__Class.h>
#endif
#undef IL2CPP_STRUCT_BuilderIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderIdle_DEFINED) && !defined(IL2CPP_STRUCT_BuilderIdle_FWDDECL)
#include <Modloader/app/structs/BuilderIdle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderIdle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
