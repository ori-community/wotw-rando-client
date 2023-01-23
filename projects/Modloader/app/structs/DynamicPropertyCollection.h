#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicPropertyCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicPropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicPropertyCollection_DEFINED)
#include <Modloader/app/structs/DynamicPropertyCollection__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicPropertyCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicPropertyCollection_DEFINED
struct DynamicPropertyCollection__Class;
struct DynamicPropertyCollection {
    struct DynamicPropertyCollection__Class* klass;
    MonitorData* monitor;
    struct DynamicPropertyCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicPropertyCollection_FWDDECL)
#define IL2CPP_STRUCT_DynamicPropertyCollection_FWDDECL
#include <Modloader/app/structs/DynamicPropertyCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicPropertyCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicPropertyCollection_DEFINED) && !defined(IL2CPP_STRUCT_DynamicPropertyCollection_FWDDECL)
#include <Modloader/app/structs/DynamicPropertyCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicPropertyCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
