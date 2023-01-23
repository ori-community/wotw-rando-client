#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Preprocessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Preprocessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Preprocessor_DEFINED)
#include <Modloader/app/structs/Preprocessor__Fields.h>
#if defined(IL2CPP_STRUCT_Preprocessor__Fields_DEFINED)
#define IL2CPP_STRUCT_Preprocessor_DEFINED
struct Preprocessor__Class;
struct Preprocessor {
    struct Preprocessor__Class* klass;
    MonitorData* monitor;
    struct Preprocessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Preprocessor_FWDDECL)
#define IL2CPP_STRUCT_Preprocessor_FWDDECL
#include <Modloader/app/structs/Preprocessor__Class.h>
#endif
#undef IL2CPP_STRUCT_Preprocessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Preprocessor_DEFINED) && !defined(IL2CPP_STRUCT_Preprocessor_FWDDECL)
#include <Modloader/app/structs/Preprocessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Preprocessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
