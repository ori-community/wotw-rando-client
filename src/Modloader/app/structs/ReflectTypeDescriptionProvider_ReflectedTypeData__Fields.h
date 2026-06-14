#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectTypeDescriptionProvider_ReflectedTypeData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider_ReflectedTypeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider_ReflectedTypeData__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider_ReflectedTypeData__Fields_DEFINED
struct Type;
struct AttributeCollection;
struct EventDescriptorCollection;
struct PropertyDescriptorCollection;
struct TypeConverter;
struct Object__Array;
struct Type__Array;
struct __declspec(align(8)) ReflectTypeDescriptionProvider_ReflectedTypeData__Fields {
    struct Type* _type;
    struct AttributeCollection* _attributes;
    struct EventDescriptorCollection* _events;
    struct PropertyDescriptorCollection* _properties;
    struct TypeConverter* _converter;
    struct Object__Array* _editors;
    struct Type__Array* _editorTypes;
    int32_t _editorCount;
};
#endif
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider_ReflectedTypeData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReflectTypeDescriptionProvider_ReflectedTypeData__Fields_FWDDECL
#include <Modloader/app/structs/AttributeCollection.h>
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_ReflectTypeDescriptionProvider_ReflectedTypeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider_ReflectedTypeData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReflectTypeDescriptionProvider_ReflectedTypeData__Fields_FWDDECL)
#include <Modloader/app/structs/ReflectTypeDescriptionProvider_ReflectedTypeData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectTypeDescriptionProvider_ReflectedTypeData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
