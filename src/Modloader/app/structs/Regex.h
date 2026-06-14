#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Regex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Regex_INITIALIZING
#if !defined(IL2CPP_STRUCT_Regex_DEFINED)
#include <Modloader/app/structs/Regex__Fields.h>
#if defined(IL2CPP_STRUCT_Regex__Fields_DEFINED)
#define IL2CPP_STRUCT_Regex_DEFINED
struct Regex__Class;
struct Regex {
    struct Regex__Class* klass;
    MonitorData* monitor;
    struct Regex__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Regex_FWDDECL)
#define IL2CPP_STRUCT_Regex_FWDDECL
#include <Modloader/app/structs/Regex__Class.h>
#endif
#undef IL2CPP_STRUCT_Regex_INITIALIZING
#if !defined(IL2CPP_STRUCT_Regex_DEFINED) && !defined(IL2CPP_STRUCT_Regex_FWDDECL)
#include <Modloader/app/structs/Regex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Regex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
