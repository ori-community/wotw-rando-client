#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TailoringInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TailoringInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TailoringInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_TailoringInfo__Fields_DEFINED
struct __declspec(align(8)) TailoringInfo__Fields {
    int32_t LCID;
    int32_t TailoringIndex;
    int32_t TailoringCount;
    bool FrenchSort;
};
#endif
#if !defined(IL2CPP_STRUCT_TailoringInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_TailoringInfo__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TailoringInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TailoringInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TailoringInfo__Fields_FWDDECL)
#include <Modloader/app/structs/TailoringInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TailoringInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
