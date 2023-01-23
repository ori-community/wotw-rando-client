#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListDictionaryInternal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListDictionaryInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionaryInternal_DEFINED)
#include <Modloader/app/structs/ListDictionaryInternal__Fields.h>
#if defined(IL2CPP_STRUCT_ListDictionaryInternal__Fields_DEFINED)
#define IL2CPP_STRUCT_ListDictionaryInternal_DEFINED
struct ListDictionaryInternal__Class;
struct ListDictionaryInternal {
    struct ListDictionaryInternal__Class* klass;
    MonitorData* monitor;
    struct ListDictionaryInternal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListDictionaryInternal_FWDDECL)
#define IL2CPP_STRUCT_ListDictionaryInternal_FWDDECL
#include <Modloader/app/structs/ListDictionaryInternal__Class.h>
#endif
#undef IL2CPP_STRUCT_ListDictionaryInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListDictionaryInternal_DEFINED) && !defined(IL2CPP_STRUCT_ListDictionaryInternal_FWDDECL)
#include <Modloader/app/structs/ListDictionaryInternal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListDictionaryInternal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
