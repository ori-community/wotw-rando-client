#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContentValidator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentValidator_DEFINED)
#include <Modloader/app/structs/ContentValidator__Fields.h>
#if defined(IL2CPP_STRUCT_ContentValidator__Fields_DEFINED)
#define IL2CPP_STRUCT_ContentValidator_DEFINED
struct ContentValidator__Class;
struct ContentValidator {
    struct ContentValidator__Class* klass;
    MonitorData* monitor;
    struct ContentValidator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContentValidator_FWDDECL)
#define IL2CPP_STRUCT_ContentValidator_FWDDECL
#include <Modloader/app/structs/ContentValidator__Class.h>
#endif
#undef IL2CPP_STRUCT_ContentValidator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContentValidator_DEFINED) && !defined(IL2CPP_STRUCT_ContentValidator_FWDDECL)
#include <Modloader/app/structs/ContentValidator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContentValidator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
