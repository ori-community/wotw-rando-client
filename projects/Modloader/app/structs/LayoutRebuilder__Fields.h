#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayoutRebuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayoutRebuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutRebuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_LayoutRebuilder__Fields_DEFINED
struct RectTransform;
struct __declspec(align(8)) LayoutRebuilder__Fields {
    struct RectTransform* m_ToRebuild;
    int32_t m_CachedHashFromTransform;
};
#endif
#if !defined(IL2CPP_STRUCT_LayoutRebuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_LayoutRebuilder__Fields_FWDDECL
#include <Modloader/app/structs/RectTransform.h>
#endif
#undef IL2CPP_STRUCT_LayoutRebuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutRebuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LayoutRebuilder__Fields_FWDDECL)
#include <Modloader/app/structs/LayoutRebuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayoutRebuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
