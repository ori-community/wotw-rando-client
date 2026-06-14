#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexConverter_DEFINED)
#define IL2CPP_STRUCT_RegexConverter_DEFINED
struct RegexConverter__Class;
struct RegexConverter {
    struct RegexConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RegexConverter_FWDDECL)
#define IL2CPP_STRUCT_RegexConverter_FWDDECL
#include <Modloader/app/structs/RegexConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexConverter_DEFINED) && !defined(IL2CPP_STRUCT_RegexConverter_FWDDECL)
#include <Modloader/app/structs/RegexConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
