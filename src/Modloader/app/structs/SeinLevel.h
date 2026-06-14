#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLevel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLevel_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLevel_DEFINED)
#include <Modloader/app/structs/SeinLevel__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLevel__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLevel_DEFINED
struct SeinLevel__Class;
struct SeinLevel {
    struct SeinLevel__Class* klass;
    MonitorData* monitor;
    struct SeinLevel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLevel_FWDDECL)
#define IL2CPP_STRUCT_SeinLevel_FWDDECL
#include <Modloader/app/structs/SeinLevel__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLevel_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLevel_DEFINED) && !defined(IL2CPP_STRUCT_SeinLevel_FWDDECL)
#include <Modloader/app/structs/SeinLevel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLevel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
