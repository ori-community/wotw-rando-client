#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCTypeDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCTypeDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCTypeDictionary_DEFINED)
#include <Modloader/app/structs/NPCTypeDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_NPCTypeDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCTypeDictionary_DEFINED
struct NPCTypeDictionary__Class;
struct NPCTypeDictionary {
    struct NPCTypeDictionary__Class* klass;
    MonitorData* monitor;
    struct NPCTypeDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCTypeDictionary_FWDDECL)
#define IL2CPP_STRUCT_NPCTypeDictionary_FWDDECL
#include <Modloader/app/structs/NPCTypeDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCTypeDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCTypeDictionary_DEFINED) && !defined(IL2CPP_STRUCT_NPCTypeDictionary_FWDDECL)
#include <Modloader/app/structs/NPCTypeDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCTypeDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
