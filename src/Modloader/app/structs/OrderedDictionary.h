#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OrderedDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OrderedDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrderedDictionary_DEFINED)
#include <Modloader/app/structs/OrderedDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_OrderedDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_OrderedDictionary_DEFINED
struct OrderedDictionary__Class;
struct OrderedDictionary {
    struct OrderedDictionary__Class* klass;
    MonitorData* monitor;
    struct OrderedDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OrderedDictionary_FWDDECL)
#define IL2CPP_STRUCT_OrderedDictionary_FWDDECL
#include <Modloader/app/structs/OrderedDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_OrderedDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_OrderedDictionary_DEFINED) && !defined(IL2CPP_STRUCT_OrderedDictionary_FWDDECL)
#include <Modloader/app/structs/OrderedDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OrderedDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
