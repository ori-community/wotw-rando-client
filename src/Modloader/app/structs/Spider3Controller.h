#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Spider3Controller_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Spider3Controller_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spider3Controller_DEFINED)
#include <Modloader/app/structs/Spider3Controller__Fields.h>
#if defined(IL2CPP_STRUCT_Spider3Controller__Fields_DEFINED)
#define IL2CPP_STRUCT_Spider3Controller_DEFINED
struct Spider3Controller__Class;
struct Spider3Controller {
    struct Spider3Controller__Class* klass;
    MonitorData* monitor;
    struct Spider3Controller__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Spider3Controller_FWDDECL)
#define IL2CPP_STRUCT_Spider3Controller_FWDDECL
#include <Modloader/app/structs/Spider3Controller__Class.h>
#endif
#undef IL2CPP_STRUCT_Spider3Controller_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spider3Controller_DEFINED) && !defined(IL2CPP_STRUCT_Spider3Controller_FWDDECL)
#include <Modloader/app/structs/Spider3Controller.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Spider3Controller.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
