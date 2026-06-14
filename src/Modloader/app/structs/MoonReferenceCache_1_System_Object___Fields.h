#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonReferenceCache_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonReferenceCache_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonReferenceCache_1_System_Object___Fields_DEFINED)
#define IL2CPP_STRUCT_MoonReferenceCache_1_System_Object___Fields_DEFINED
struct MoonReference_1_System_Object_;
struct Object;
struct __declspec(align(8)) MoonReferenceCache_1_System_Object___Fields {
    struct MoonReference_1_System_Object_* m_moonRef;
    struct Object* m_resolvedRef;
    bool m_alwaysResolveOnEditor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonReferenceCache_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonReferenceCache_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_MoonReferenceCache_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonReferenceCache_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonReferenceCache_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/MoonReferenceCache_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonReferenceCache_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
