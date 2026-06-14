#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionary_DEFINED)
#include <Modloader/app/structs/ListDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_ListDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_ListDictionary_DEFINED
struct ListDictionary__Class;
struct ListDictionary {
    struct ListDictionary__Class* klass;
    MonitorData* monitor;
    struct ListDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListDictionary_FWDDECL)
#define IL2CPP_STRUCT_ListDictionary_FWDDECL
#include <Modloader/app/structs/ListDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_ListDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionary_DEFINED) && !defined(IL2CPP_STRUCT_ListDictionary_FWDDECL)
#include <Modloader/app/structs/ListDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
