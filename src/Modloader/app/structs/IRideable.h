#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRideable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRideable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRideable_DEFINED)
#define IL2CPP_STRUCT_IRideable_DEFINED
struct IRideable__Class;
struct IRideable {
    struct IRideable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRideable_FWDDECL)
#define IL2CPP_STRUCT_IRideable_FWDDECL
#include <Modloader/app/structs/IRideable__Class.h>
#endif
#undef IL2CPP_STRUCT_IRideable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRideable_DEFINED) && !defined(IL2CPP_STRUCT_IRideable_FWDDECL)
#include <Modloader/app/structs/IRideable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRideable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
