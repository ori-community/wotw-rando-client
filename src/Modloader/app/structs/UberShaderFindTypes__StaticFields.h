#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderFindTypes__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderFindTypes__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderFindTypes__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberShaderFindTypes__StaticFields_DEFINED
struct IEnumerable_1_System_Type_;
struct List_1_UberShaderCustomShaderModifierResult_;
struct List_1_UberShaderCustomShaderBlockResult_;
struct GUIContent__Array;
struct UberShaderFindTypes__StaticFields {
    struct IEnumerable_1_System_Type_* s_collection;
    struct List_1_UberShaderCustomShaderModifierResult_* Modifiers;
    struct List_1_UberShaderCustomShaderBlockResult_* Blocks;
    struct GUIContent__Array* m_blocks;
    struct GUIContent__Array* m_mods;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderFindTypes__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderFindTypes__StaticFields_FWDDECL
#include <Modloader/app/structs/GUIContent__Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_Type_.h>
#include <Modloader/app/structs/List_1_UberShaderCustomShaderBlockResult_.h>
#include <Modloader/app/structs/List_1_UberShaderCustomShaderModifierResult_.h>
#endif
#undef IL2CPP_STRUCT_UberShaderFindTypes__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderFindTypes__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderFindTypes__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberShaderFindTypes__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderFindTypes__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
