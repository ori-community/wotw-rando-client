#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultilineStringConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultilineStringConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultilineStringConverter_DEFINED)
#define IL2CPP_STRUCT_MultilineStringConverter_DEFINED
struct MultilineStringConverter__Class;
struct MultilineStringConverter {
    struct MultilineStringConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MultilineStringConverter_FWDDECL)
#define IL2CPP_STRUCT_MultilineStringConverter_FWDDECL
#include <Modloader/app/structs/MultilineStringConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_MultilineStringConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultilineStringConverter_DEFINED) && !defined(IL2CPP_STRUCT_MultilineStringConverter_FWDDECL)
#include <Modloader/app/structs/MultilineStringConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultilineStringConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
