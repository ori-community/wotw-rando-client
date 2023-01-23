#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDictionary_DEFINED)
#define IL2CPP_STRUCT_IDictionary_DEFINED
struct IDictionary__Class;
struct IDictionary {
    struct IDictionary__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDictionary_FWDDECL)
#define IL2CPP_STRUCT_IDictionary_FWDDECL
#include <Modloader/app/structs/IDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_IDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDictionary_DEFINED) && !defined(IL2CPP_STRUCT_IDictionary_FWDDECL)
#include <Modloader/app/structs/IDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
