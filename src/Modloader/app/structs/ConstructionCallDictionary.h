#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstructionCallDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstructionCallDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionCallDictionary_DEFINED)
#include <Modloader/app/structs/ConstructionCallDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_ConstructionCallDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstructionCallDictionary_DEFINED
struct ConstructionCallDictionary__Class;
struct ConstructionCallDictionary {
    struct ConstructionCallDictionary__Class* klass;
    MonitorData* monitor;
    struct ConstructionCallDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConstructionCallDictionary_FWDDECL)
#define IL2CPP_STRUCT_ConstructionCallDictionary_FWDDECL
#include <Modloader/app/structs/ConstructionCallDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_ConstructionCallDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstructionCallDictionary_DEFINED) && !defined(IL2CPP_STRUCT_ConstructionCallDictionary_FWDDECL)
#include <Modloader/app/structs/ConstructionCallDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstructionCallDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
