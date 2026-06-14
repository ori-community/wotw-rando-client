#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeCollection__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeCollection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeCollection__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AttributeCollection__StaticFields_DEFINED
struct AttributeCollection;
struct Hashtable;
struct Object;
struct AttributeCollection__StaticFields {
    struct AttributeCollection* Empty;
    struct Hashtable* _defaultAttributes;
    struct Object* internalSyncObject;
};
#endif
#if !defined(IL2CPP_STRUCT_AttributeCollection__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AttributeCollection__StaticFields_FWDDECL
#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_AttributeCollection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeCollection__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AttributeCollection__StaticFields_FWDDECL)
#include <Modloader/app/structs/AttributeCollection__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeCollection__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
