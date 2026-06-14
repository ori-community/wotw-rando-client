#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatedValueListener_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatedValueListener_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatedValueListener_1_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatedValueListener_1_System_Object___Fields_DEFINED
struct Object;
struct IAnimatedValueProvider_1_System_Object_;
struct Action_1_Object_;
struct __declspec(align(8)) AnimatedValueListener_1_System_Object___Fields {
    struct Object* DefaultValue;
    struct IAnimatedValueProvider_1_System_Object_* ValueProvider;
    struct Action_1_Object_* OnValueUpdated;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimatedValueListener_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatedValueListener_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/IAnimatedValueProvider_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_AnimatedValueListener_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatedValueListener_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatedValueListener_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/AnimatedValueListener_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatedValueListener_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
