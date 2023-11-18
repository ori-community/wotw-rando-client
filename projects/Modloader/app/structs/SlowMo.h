#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlowMo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlowMo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlowMo_DEFINED)
#include <Modloader/app/structs/SlowMo__Fields.h>
#if defined(IL2CPP_STRUCT_SlowMo__Fields_DEFINED)
#define IL2CPP_STRUCT_SlowMo_DEFINED
struct SlowMo__Class;
struct SlowMo {
    struct SlowMo__Class* klass;
    MonitorData* monitor;
    struct SlowMo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlowMo_FWDDECL)
#define IL2CPP_STRUCT_SlowMo_FWDDECL
#include <Modloader/app/structs/SlowMo__Class.h>
#endif
#undef IL2CPP_STRUCT_SlowMo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlowMo_DEFINED) && !defined(IL2CPP_STRUCT_SlowMo_FWDDECL)
#include <Modloader/app/structs/SlowMo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlowMo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
