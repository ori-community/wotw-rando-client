#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequencePlatformAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequencePlatformAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_SequencePlatformAction__Fields_DEFINED
struct SequencePlatformB;
struct HashSet_1_SequencePlatformB_;
struct SequencePlatformAction__Fields {
    struct ActionMethod__Fields _;
    struct SequencePlatformB* Sequence;
    struct HashSet_1_SequencePlatformB_* m_found;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequencePlatformAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SequencePlatformAction__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_SequencePlatformB_.h>
#include <Modloader/app/structs/SequencePlatformB.h>
#endif
#undef IL2CPP_STRUCT_SequencePlatformAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SequencePlatformAction__Fields_FWDDECL)
#include <Modloader/app/structs/SequencePlatformAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequencePlatformAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
