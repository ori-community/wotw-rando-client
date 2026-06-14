#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinXmlDateTime__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinXmlDateTime__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlDateTime__StaticFields_DEFINED)
#define IL2CPP_STRUCT_BinXmlDateTime__StaticFields_DEFINED
struct Int32__Array;
struct BinXmlDateTime__StaticFields {
    struct Int32__Array* KatmaiTimeScaleMultiplicator;
    double SQLTicksPerMillisecond;
    int32_t SQLTicksPerSecond;
    int32_t SQLTicksPerMinute;
    int32_t SQLTicksPerHour;
    int32_t SQLTicksPerDay;
};
#endif
#if !defined(IL2CPP_STRUCT_BinXmlDateTime__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_BinXmlDateTime__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_BinXmlDateTime__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinXmlDateTime__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_BinXmlDateTime__StaticFields_FWDDECL)
#include <Modloader/app/structs/BinXmlDateTime__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinXmlDateTime__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
