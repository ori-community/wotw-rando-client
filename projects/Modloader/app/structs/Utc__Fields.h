#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Utc__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Utc__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utc__Fields_DEFINED)
#define IL2CPP_STRUCT_Utc__Fields_DEFINED
struct String;
struct __declspec(align(8)) Utc__Fields {
    struct String* _stId_k__BackingField;
    struct String* _aId_k__BackingField;
    struct String* _raId_k__BackingField;
    struct String* _op_k__BackingField;
    int64_t _cat_k__BackingField;
    int64_t _flags_k__BackingField;
    struct String* _sqmId_k__BackingField;
    struct String* _mon_k__BackingField;
    int32_t _cpId_k__BackingField;
    struct String* _bSeq_k__BackingField;
    struct String* _epoch_k__BackingField;
    int64_t _seq_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Utc__Fields_FWDDECL)
#define IL2CPP_STRUCT_Utc__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Utc__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utc__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Utc__Fields_FWDDECL)
#include <Modloader/app/structs/Utc__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Utc__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
