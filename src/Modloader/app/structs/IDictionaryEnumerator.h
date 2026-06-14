#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDictionaryEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDictionaryEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDictionaryEnumerator_DEFINED)
#define IL2CPP_STRUCT_IDictionaryEnumerator_DEFINED
struct IDictionaryEnumerator__Class;
struct IDictionaryEnumerator {
    struct IDictionaryEnumerator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDictionaryEnumerator_FWDDECL)
#define IL2CPP_STRUCT_IDictionaryEnumerator_FWDDECL
#include <Modloader/app/structs/IDictionaryEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_IDictionaryEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDictionaryEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_IDictionaryEnumerator_FWDDECL)
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
