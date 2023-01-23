#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BasePrewarmOperation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BasePrewarmOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_DEFINED)
#include <Modloader/app/structs/PrewarmOperationSlot__Enum.h>
#include <Modloader/app/structs/PrewarmOperationType__Enum.h>
#if defined(IL2CPP_STRUCT_PrewarmOperationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_PrewarmOperationSlot__Enum_DEFINED)
#define IL2CPP_STRUCT_BasePrewarmOperation__Fields_DEFINED
struct String;
struct __declspec(align(8)) BasePrewarmOperation__Fields {
    PrewarmOperationType__Enum _OperationType_k__BackingField;

    PrewarmOperationSlot__Enum _OperationSlot_k__BackingField;

    int32_t _PrewarmOperationOrder_k__BackingField;
    struct String* _Name_k__BackingField;
    bool _HasBegun_k__BackingField;
    bool _ShouldExecute_k__BackingField;
    bool _IsDone_k__BackingField;
    float _PercentDone_k__BackingField;
    float m_startTime;
    float m_lastUpdateTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_FWDDECL)
#define IL2CPP_STRUCT_BasePrewarmOperation__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BasePrewarmOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_FWDDECL)
#include <Modloader/app/structs/BasePrewarmOperation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BasePrewarmOperation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
