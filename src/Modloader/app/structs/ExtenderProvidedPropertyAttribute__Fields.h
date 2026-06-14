#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_DEFINED
struct PropertyDescriptor;
struct IExtenderProvider;
struct Type;
struct __declspec(align(8)) ExtenderProvidedPropertyAttribute__Fields {
    struct PropertyDescriptor* extenderProperty;
    struct IExtenderProvider* provider;
    struct Type* receiverType;
};
#endif
#if !defined(IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_FWDDECL
#include <Modloader/app/structs/IExtenderProvider.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExtenderProvidedPropertyAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/ExtenderProvidedPropertyAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExtenderProvidedPropertyAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
