#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFeatherFlap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFeatherFlap_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFeatherFlap_DEFINED)
#include <Modloader/app/structs/SeinFeatherFlap__Fields.h>
#if defined(IL2CPP_STRUCT_SeinFeatherFlap__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinFeatherFlap_DEFINED
struct SeinFeatherFlap__Class;
struct SeinFeatherFlap {
    struct SeinFeatherFlap__Class* klass;
    MonitorData* monitor;
    struct SeinFeatherFlap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFeatherFlap_FWDDECL)
#define IL2CPP_STRUCT_SeinFeatherFlap_FWDDECL
#include <Modloader/app/structs/SeinFeatherFlap__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinFeatherFlap_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFeatherFlap_DEFINED) && !defined(IL2CPP_STRUCT_SeinFeatherFlap_FWDDECL)
#include <Modloader/app/structs/SeinFeatherFlap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFeatherFlap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
