#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasShardCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasShardCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasShardCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritShardType__Enum_DEFINED)
#define IL2CPP_STRUCT_HasShardCondition__Fields_DEFINED
struct HasShardCondition__Fields {
    struct Condition_1__Fields _;
    SpiritShardType__Enum SpiritShardType;

    int32_t MinimumLevel;
    bool MustMeetMinimumLevel;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasShardCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_HasShardCondition__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_HasShardCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasShardCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HasShardCondition__Fields_FWDDECL)
#include <Modloader/app/structs/HasShardCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasShardCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
