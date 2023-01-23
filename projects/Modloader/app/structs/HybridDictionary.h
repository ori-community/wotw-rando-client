#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HybridDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HybridDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_HybridDictionary_DEFINED)
#include <Modloader/app/structs/HybridDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_HybridDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_HybridDictionary_DEFINED
struct HybridDictionary__Class;
struct HybridDictionary {
    struct HybridDictionary__Class* klass;
    MonitorData* monitor;
    struct HybridDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HybridDictionary_FWDDECL)
#define IL2CPP_STRUCT_HybridDictionary_FWDDECL
#include <Modloader/app/structs/HybridDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_HybridDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_HybridDictionary_DEFINED) && !defined(IL2CPP_STRUCT_HybridDictionary_FWDDECL)
#include <Modloader/app/structs/HybridDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HybridDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
