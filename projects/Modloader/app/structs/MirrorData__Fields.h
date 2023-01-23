#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MirrorData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MirrorData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirrorData__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_MirrorData__Fields_DEFINED
struct List_1_MirroringData_;
struct MirrorData__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_MirroringData_* mirrorData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MirrorData__Fields_FWDDECL)
#define IL2CPP_STRUCT_MirrorData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_MirroringData_.h>
#endif
#undef IL2CPP_STRUCT_MirrorData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirrorData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MirrorData__Fields_FWDDECL)
#include <Modloader/app/structs/MirrorData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MirrorData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
