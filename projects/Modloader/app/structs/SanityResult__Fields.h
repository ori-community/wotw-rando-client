#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SanityResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SanityResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SanityResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SanityResult__Fields_DEFINED
struct String;
struct GameObject;
struct Func_2_UnityEngine_GameObject_Boolean__1;
struct __declspec(align(8)) SanityResult__Fields {
    struct String* m_summary;
    struct String* m_details;
    bool m_passed;
    struct GameObject* m_gameObject;
    struct Func_2_UnityEngine_GameObject_Boolean__1* m_fixFunction;
};
#endif
#if !defined(IL2CPP_STRUCT_SanityResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_SanityResult__Fields_FWDDECL
#include <Modloader/app/structs/Func_2_UnityEngine_GameObject_Boolean__1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SanityResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SanityResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SanityResult__Fields_FWDDECL)
#include <Modloader/app/structs/SanityResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SanityResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
