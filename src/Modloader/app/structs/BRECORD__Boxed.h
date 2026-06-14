#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BRECORD__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BRECORD__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BRECORD__Boxed_DEFINED)
#include <Modloader/app/structs/BRECORD.h>
#if defined(IL2CPP_STRUCT_BRECORD_DEFINED)
#define IL2CPP_STRUCT_BRECORD__Boxed_DEFINED
struct BRECORD__Class;
struct BRECORD__Boxed {
    struct BRECORD__Class* klass;
    MonitorData* monitor;
    struct BRECORD fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BRECORD__Boxed_FWDDECL)
#define IL2CPP_STRUCT_BRECORD__Boxed_FWDDECL
#include <Modloader/app/structs/BRECORD__Class.h>
#endif
#undef IL2CPP_STRUCT_BRECORD__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BRECORD__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_BRECORD__Boxed_FWDDECL)
#include <Modloader/app/structs/BRECORD__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BRECORD__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
