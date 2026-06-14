#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequencePlatformBManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequencePlatformBManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformBManager__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_SequencePlatformBManager__Fields_DEFINED
struct List_1_SequencePlatformB_;
struct SequencePlatformBManager__Fields {
    struct SaveSerialize__Fields _;
    struct List_1_SequencePlatformB_* PlatformSequence;
    int32_t CurrentPlatform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequencePlatformBManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_SequencePlatformBManager__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SequencePlatformB_.h>
#endif
#undef IL2CPP_STRUCT_SequencePlatformBManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformBManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SequencePlatformBManager__Fields_FWDDECL)
#include <Modloader/app/structs/SequencePlatformBManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequencePlatformBManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
