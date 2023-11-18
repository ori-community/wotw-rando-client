#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinearPathVariedSpeed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinearPathVariedSpeed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinearPathVariedSpeed_DEFINED)
#include <Modloader/app/structs/LinearPathVariedSpeed__Fields.h>
#if defined(IL2CPP_STRUCT_LinearPathVariedSpeed__Fields_DEFINED)
#define IL2CPP_STRUCT_LinearPathVariedSpeed_DEFINED
struct LinearPathVariedSpeed__Class;
struct LinearPathVariedSpeed {
    struct LinearPathVariedSpeed__Class* klass;
    MonitorData* monitor;
    struct LinearPathVariedSpeed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinearPathVariedSpeed_FWDDECL)
#define IL2CPP_STRUCT_LinearPathVariedSpeed_FWDDECL
#include <Modloader/app/structs/LinearPathVariedSpeed__Class.h>
#endif
#undef IL2CPP_STRUCT_LinearPathVariedSpeed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinearPathVariedSpeed_DEFINED) && !defined(IL2CPP_STRUCT_LinearPathVariedSpeed_FWDDECL)
#include <Modloader/app/structs/LinearPathVariedSpeed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinearPathVariedSpeed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
