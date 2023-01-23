#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntitiesTypeDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntitiesTypeDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitiesTypeDictionary_DEFINED)
#include <Modloader/app/structs/EntitiesTypeDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_EntitiesTypeDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_EntitiesTypeDictionary_DEFINED
struct EntitiesTypeDictionary__Class;
struct EntitiesTypeDictionary {
    struct EntitiesTypeDictionary__Class* klass;
    MonitorData* monitor;
    struct EntitiesTypeDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntitiesTypeDictionary_FWDDECL)
#define IL2CPP_STRUCT_EntitiesTypeDictionary_FWDDECL
#include <Modloader/app/structs/EntitiesTypeDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_EntitiesTypeDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitiesTypeDictionary_DEFINED) && !defined(IL2CPP_STRUCT_EntitiesTypeDictionary_FWDDECL)
#include <Modloader/app/structs/EntitiesTypeDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntitiesTypeDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
