#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonGizmos__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonGizmos__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonGizmos__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonGizmos__StaticFields_DEFINED
struct Dictionary_2_System_Type_System_Type_;
struct MoonGizmos__StaticFields {
    bool m_typeToGizmoDictionaryInitialized;
    struct Dictionary_2_System_Type_System_Type_* m_typeToGizmo;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonGizmos__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonGizmos__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Type_.h>
#endif
#undef IL2CPP_STRUCT_MoonGizmos__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonGizmos__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonGizmos__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonGizmos__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonGizmos__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
