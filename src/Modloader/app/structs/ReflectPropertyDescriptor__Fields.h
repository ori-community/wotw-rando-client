#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/BitVector32.h>
#include <Modloader/app/structs/PropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyDescriptor__Fields_DEFINED) && defined(IL2CPP_STRUCT_BitVector32_DEFINED)
#define IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_DEFINED
struct Type;
struct Object;
struct PropertyInfo_1;
struct MethodInfo_1;
struct EventDescriptor_1;
struct ReflectPropertyDescriptor__Fields {
    struct PropertyDescriptor__Fields _;
    struct BitVector32 state;
    struct Type* componentClass;
    struct Type* type;
    struct Object* defaultValue;
    struct Object* ambientValue;
    struct PropertyInfo_1* propInfo;
    struct MethodInfo_1* getMethod;
    struct MethodInfo_1* setMethod;
    struct MethodInfo_1* shouldSerializeMethod;
    struct MethodInfo_1* resetMethod;
    struct EventDescriptor_1* realChangedEvent;
    struct EventDescriptor_1* realIPropChangedEvent;
    struct Type* receiverType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/ReflectPropertyDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectPropertyDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
