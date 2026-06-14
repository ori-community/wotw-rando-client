#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoisonousCloud_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoisonousCloud_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousCloud_DEFINED)
#include <Modloader/app/structs/PoisonousCloud__Fields.h>
#if defined(IL2CPP_STRUCT_PoisonousCloud__Fields_DEFINED)
#define IL2CPP_STRUCT_PoisonousCloud_DEFINED
struct PoisonousCloud__Class;
struct PoisonousCloud {
    struct PoisonousCloud__Class* klass;
    MonitorData* monitor;
    struct PoisonousCloud__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoisonousCloud_FWDDECL)
#define IL2CPP_STRUCT_PoisonousCloud_FWDDECL
#include <Modloader/app/structs/PoisonousCloud__Class.h>
#endif
#undef IL2CPP_STRUCT_PoisonousCloud_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousCloud_DEFINED) && !defined(IL2CPP_STRUCT_PoisonousCloud_FWDDECL)
#include <Modloader/app/structs/PoisonousCloud.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoisonousCloud.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
