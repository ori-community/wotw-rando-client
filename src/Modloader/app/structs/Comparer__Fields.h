#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Comparer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Comparer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Comparer__Fields_DEFINED)
#define IL2CPP_STRUCT_Comparer__Fields_DEFINED
struct CompareInfo;
struct __declspec(align(8)) Comparer__Fields {
    struct CompareInfo* m_compareInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_Comparer__Fields_FWDDECL)
#define IL2CPP_STRUCT_Comparer__Fields_FWDDECL
#include <Modloader/app/structs/CompareInfo.h>
#endif
#undef IL2CPP_STRUCT_Comparer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Comparer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Comparer__Fields_FWDDECL)
#include <Modloader/app/structs/Comparer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Comparer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
