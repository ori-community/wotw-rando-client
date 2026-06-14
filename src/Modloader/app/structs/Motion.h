#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Motion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Motion_INITIALIZING
#if !defined(IL2CPP_STRUCT_Motion_DEFINED)
#include <Modloader/app/structs/Motion__Fields.h>
#if defined(IL2CPP_STRUCT_Motion__Fields_DEFINED)
#define IL2CPP_STRUCT_Motion_DEFINED
struct Motion__Class;
struct Motion {
    struct Motion__Class* klass;
    MonitorData* monitor;
    struct Motion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Motion_FWDDECL)
#define IL2CPP_STRUCT_Motion_FWDDECL
#include <Modloader/app/structs/Motion__Class.h>
#endif
#undef IL2CPP_STRUCT_Motion_INITIALIZING
#if !defined(IL2CPP_STRUCT_Motion_DEFINED) && !defined(IL2CPP_STRUCT_Motion_FWDDECL)
#include <Modloader/app/structs/Motion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Motion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
