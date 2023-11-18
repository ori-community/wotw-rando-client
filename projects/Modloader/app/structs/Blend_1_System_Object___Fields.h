#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Blend_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Blend_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blend_1_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_Blend_1_System_Object___Fields_DEFINED
struct Object;
struct Func_2_Single_Single_;
struct Func_4_Object_Object_Single_Object_;
struct __declspec(align(8)) Blend_1_System_Object___Fields {
    struct Object* End;
    struct Object* Start;
    float Time;
    struct Func_2_Single_Single_* m_ease;
    struct Func_4_Object_Object_Single_Object_* m_lerp;
};
#endif
#if !defined(IL2CPP_STRUCT_Blend_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_Blend_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/Func_2_Single_Single_.h>
#include <Modloader/app/structs/Func_4_Object_Object_Single_Object_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Blend_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blend_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_Blend_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/Blend_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Blend_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
