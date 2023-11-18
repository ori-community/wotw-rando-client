#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectTypeDescriptionProvider__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider__StaticFields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider__StaticFields_DEFINED
struct Type__Array;
struct Hashtable;
struct Object;
struct ReflectTypeDescriptionProvider__StaticFields {
    struct Type__Array* _typeConstructor;
    struct Hashtable* _editorTables;
    struct Hashtable* _intrinsicTypeConverters;
    struct Object* _intrinsicReferenceKey;
    struct Object* _intrinsicNullableKey;
    struct Object* _dictionaryKey;
    struct Hashtable* _propertyCache;
    struct Hashtable* _eventCache;
    struct Hashtable* _attributeCache;
    struct Hashtable* _extendedPropertyCache;
    struct Guid _extenderProviderKey;
    struct Guid _extenderPropertiesKey;
    struct Guid _extenderProviderPropertiesKey;
    struct Type__Array* _skipInterfaceAttributeList;
    struct Object* _internalSyncObject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_ReflectTypeDescriptionProvider__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider__StaticFields_FWDDECL)
#include <Modloader/app/structs/ReflectTypeDescriptionProvider__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectTypeDescriptionProvider__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
