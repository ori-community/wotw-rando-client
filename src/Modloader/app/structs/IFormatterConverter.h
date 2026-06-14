#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IFormatterConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IFormatterConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFormatterConverter_DEFINED)
#define IL2CPP_STRUCT_IFormatterConverter_DEFINED
struct IFormatterConverter__Class;
struct IFormatterConverter {
    struct IFormatterConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IFormatterConverter_FWDDECL)
#define IL2CPP_STRUCT_IFormatterConverter_FWDDECL
#include <Modloader/app/structs/IFormatterConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_IFormatterConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_IFormatterConverter_DEFINED) && !defined(IL2CPP_STRUCT_IFormatterConverter_FWDDECL)
#include <Modloader/app/structs/IFormatterConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IFormatterConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
