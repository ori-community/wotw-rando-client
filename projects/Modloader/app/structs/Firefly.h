#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Firefly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Firefly_INITIALIZING
#if !defined(IL2CPP_STRUCT_Firefly_DEFINED)
#include <Modloader/app/structs/Firefly__Fields.h>
#if defined(IL2CPP_STRUCT_Firefly__Fields_DEFINED)
#define IL2CPP_STRUCT_Firefly_DEFINED
struct Firefly__Class;
struct Firefly {
    struct Firefly__Class* klass;
    MonitorData* monitor;
    struct Firefly__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Firefly_FWDDECL)
#define IL2CPP_STRUCT_Firefly_FWDDECL
#include <Modloader/app/structs/Firefly__Class.h>
#endif
#undef IL2CPP_STRUCT_Firefly_INITIALIZING
#if !defined(IL2CPP_STRUCT_Firefly_DEFINED) && !defined(IL2CPP_STRUCT_Firefly_FWDDECL)
#include <Modloader/app/structs/Firefly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Firefly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
