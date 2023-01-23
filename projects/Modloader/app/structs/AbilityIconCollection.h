#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbilityIconCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbilityIconCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilityIconCollection_DEFINED)
#include <Modloader/app/structs/AbilityIconCollection__Fields.h>
#if defined(IL2CPP_STRUCT_AbilityIconCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_AbilityIconCollection_DEFINED
struct AbilityIconCollection__Class;
struct AbilityIconCollection {
    struct AbilityIconCollection__Class* klass;
    MonitorData* monitor;
    struct AbilityIconCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbilityIconCollection_FWDDECL)
#define IL2CPP_STRUCT_AbilityIconCollection_FWDDECL
#include <Modloader/app/structs/AbilityIconCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_AbilityIconCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilityIconCollection_DEFINED) && !defined(IL2CPP_STRUCT_AbilityIconCollection_FWDDECL)
#include <Modloader/app/structs/AbilityIconCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbilityIconCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
