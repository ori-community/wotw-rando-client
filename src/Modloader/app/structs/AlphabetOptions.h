#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AlphabetOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AlphabetOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlphabetOptions_DEFINED)
#include <Modloader/app/structs/AlphabetOptions__Fields.h>
#if defined(IL2CPP_STRUCT_AlphabetOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_AlphabetOptions_DEFINED
struct AlphabetOptions__Class;
struct AlphabetOptions {
    struct AlphabetOptions__Class* klass;
    MonitorData* monitor;
    struct AlphabetOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AlphabetOptions_FWDDECL)
#define IL2CPP_STRUCT_AlphabetOptions_FWDDECL
#include <Modloader/app/structs/AlphabetOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_AlphabetOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlphabetOptions_DEFINED) && !defined(IL2CPP_STRUCT_AlphabetOptions_FWDDECL)
#include <Modloader/app/structs/AlphabetOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AlphabetOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
