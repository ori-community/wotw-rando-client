#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MCMDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MCMDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_MCMDictionary_DEFINED)
#include <Modloader/app/structs/MCMDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_MCMDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_MCMDictionary_DEFINED
struct MCMDictionary__Class;
struct MCMDictionary {
    struct MCMDictionary__Class* klass;
    MonitorData* monitor;
    struct MCMDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MCMDictionary_FWDDECL)
#define IL2CPP_STRUCT_MCMDictionary_FWDDECL
#include <Modloader/app/structs/MCMDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_MCMDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_MCMDictionary_DEFINED) && !defined(IL2CPP_STRUCT_MCMDictionary_FWDDECL)
#include <Modloader/app/structs/MCMDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MCMDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
