#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySpring__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySpring__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySpring__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SpringContext.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpringContext_DEFINED)
#define IL2CPP_STRUCT_LegacySpring__Fields_DEFINED
struct Func_1_Boolean_;
struct ActionMethod;
struct LegacySpring__Fields {
    struct MonoBehaviour__Fields _;
    struct Func_1_Boolean_* AllowJumpModifier;
    struct ActionMethod* OnLand;
    struct ActionMethod* OnLandGrenade;
    struct SpringContext m_context;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySpring__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacySpring__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_LegacySpring__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySpring__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacySpring__Fields_FWDDECL)
#include <Modloader/app/structs/LegacySpring__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySpring__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
