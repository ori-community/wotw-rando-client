#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatterConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatterConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterConverter_DEFINED)
#define IL2CPP_STRUCT_FormatterConverter_DEFINED
struct FormatterConverter__Class;
struct FormatterConverter {
    struct FormatterConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FormatterConverter_FWDDECL)
#define IL2CPP_STRUCT_FormatterConverter_FWDDECL
#include <Modloader/app/structs/FormatterConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_FormatterConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterConverter_DEFINED) && !defined(IL2CPP_STRUCT_FormatterConverter_FWDDECL)
#include <Modloader/app/structs/FormatterConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatterConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
