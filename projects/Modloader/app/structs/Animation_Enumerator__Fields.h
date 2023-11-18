#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Animation_Enumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Animation_Enumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Animation_Enumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_Animation_Enumerator__Fields_DEFINED
struct Animation;
struct __declspec(align(8)) Animation_Enumerator__Fields {
    struct Animation* m_Outer;
    int32_t m_CurrentIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_Animation_Enumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_Animation_Enumerator__Fields_FWDDECL
#include <Modloader/app/structs/Animation.h>
#endif
#undef IL2CPP_STRUCT_Animation_Enumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Animation_Enumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Animation_Enumerator__Fields_FWDDECL)
#include <Modloader/app/structs/Animation_Enumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Animation_Enumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
