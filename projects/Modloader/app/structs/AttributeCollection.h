#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeCollection_DEFINED)
#include <Modloader/app/structs/AttributeCollection__Fields.h>
#if defined(IL2CPP_STRUCT_AttributeCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_AttributeCollection_DEFINED
struct AttributeCollection__Class;
struct AttributeCollection {
    struct AttributeCollection__Class* klass;
    MonitorData* monitor;
    struct AttributeCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttributeCollection_FWDDECL)
#define IL2CPP_STRUCT_AttributeCollection_FWDDECL
#include <Modloader/app/structs/AttributeCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_AttributeCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeCollection_DEFINED) && !defined(IL2CPP_STRUCT_AttributeCollection_FWDDECL)
#include <Modloader/app/structs/AttributeCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
