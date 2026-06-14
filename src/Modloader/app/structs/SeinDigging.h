#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDigging_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDigging_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDigging_DEFINED)
#include <Modloader/app/structs/SeinDigging__Fields.h>
#if defined(IL2CPP_STRUCT_SeinDigging__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDigging_DEFINED
struct SeinDigging__Class;
struct SeinDigging {
    struct SeinDigging__Class* klass;
    MonitorData* monitor;
    struct SeinDigging__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDigging_FWDDECL)
#define IL2CPP_STRUCT_SeinDigging_FWDDECL
#include <Modloader/app/structs/SeinDigging__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinDigging_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDigging_DEFINED) && !defined(IL2CPP_STRUCT_SeinDigging_FWDDECL)
#include <Modloader/app/structs/SeinDigging.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDigging.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
