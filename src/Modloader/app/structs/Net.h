#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Net_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Net_INITIALIZING
#if !defined(IL2CPP_STRUCT_Net_DEFINED)
#include <Modloader/app/structs/Net__Fields.h>
#if defined(IL2CPP_STRUCT_Net__Fields_DEFINED)
#define IL2CPP_STRUCT_Net_DEFINED
struct Net__Class;
struct Net {
    struct Net__Class* klass;
    MonitorData* monitor;
    struct Net__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Net_FWDDECL)
#define IL2CPP_STRUCT_Net_FWDDECL
#include <Modloader/app/structs/Net__Class.h>
#endif
#undef IL2CPP_STRUCT_Net_INITIALIZING
#if !defined(IL2CPP_STRUCT_Net_DEFINED) && !defined(IL2CPP_STRUCT_Net_FWDDECL)
#include <Modloader/app/structs/Net.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Net.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
