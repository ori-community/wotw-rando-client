#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationTester_IntElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationTester_IntElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_IntElement__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationTester_IntElement__Fields_DEFINED
struct String;
struct Action_1_Int32_;
struct Func_1_Int32_;
struct __declspec(align(8)) AnimationTester_IntElement__Fields {
    int32_t m_min;
    int32_t m_max;
    struct String* _Name_k__BackingField;
    struct Action_1_Int32_* _Setter_k__BackingField;
    struct Func_1_Int32_* _Getter_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationTester_IntElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationTester_IntElement__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/Func_1_Int32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AnimationTester_IntElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester_IntElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationTester_IntElement__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationTester_IntElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationTester_IntElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
