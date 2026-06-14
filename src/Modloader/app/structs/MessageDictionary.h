#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDictionary_DEFINED)
#include <Modloader/app/structs/MessageDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_MessageDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageDictionary_DEFINED
struct MessageDictionary__Class;
struct MessageDictionary {
    struct MessageDictionary__Class* klass;
    MonitorData* monitor;
    struct MessageDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageDictionary_FWDDECL)
#define IL2CPP_STRUCT_MessageDictionary_FWDDECL
#include <Modloader/app/structs/MessageDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDictionary_DEFINED) && !defined(IL2CPP_STRUCT_MessageDictionary_FWDDECL)
#include <Modloader/app/structs/MessageDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
