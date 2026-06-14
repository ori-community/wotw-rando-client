#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectEventDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectEventDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectEventDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/EventDescriptor_1__Fields.h>
#if defined(IL2CPP_STRUCT_EventDescriptor_1__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectEventDescriptor__Fields_DEFINED
struct Type;
struct MethodInfo_1;
struct EventInfo_1;
struct ReflectEventDescriptor__Fields {
    struct EventDescriptor_1__Fields _;
    struct Type* type;
    struct Type* componentClass;
    struct MethodInfo_1* addMethod;
    struct MethodInfo_1* removeMethod;
    struct EventInfo_1* realEvent;
    bool filledMethods;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectEventDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReflectEventDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/EventInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ReflectEventDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectEventDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReflectEventDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/ReflectEventDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectEventDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
