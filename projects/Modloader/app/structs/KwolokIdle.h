#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokIdle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokIdle_DEFINED)
#include <Modloader/app/structs/KwolokIdle__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokIdle__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokIdle_DEFINED
struct KwolokIdle__Class;
struct KwolokIdle {
    struct KwolokIdle__Class* klass;
    MonitorData* monitor;
    struct KwolokIdle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokIdle_FWDDECL)
#define IL2CPP_STRUCT_KwolokIdle_FWDDECL
#include <Modloader/app/structs/KwolokIdle__Class.h>
#endif
#undef IL2CPP_STRUCT_KwolokIdle_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokIdle_DEFINED) && !defined(IL2CPP_STRUCT_KwolokIdle_FWDDECL)
#include <Modloader/app/structs/KwolokIdle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokIdle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
