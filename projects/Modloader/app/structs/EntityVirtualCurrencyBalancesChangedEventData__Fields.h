#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityVirtualCurrencyBalancesChangedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityVirtualCurrencyBalancesChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityVirtualCurrencyBalancesChangedEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityVirtualCurrencyBalancesChangedEventData__Fields_DEFINED
struct String;
struct EntityLineage_1;
struct Dictionary_2_System_String_System_Int32_;
struct EntityVirtualCurrencyBalancesChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* EntityChain;
    struct EntityLineage_1* EntityLineage;
    struct String* SequenceId;
    struct Dictionary_2_System_String_System_Int32_* VirtualCurrencyBalances;
    struct String* VirtualCurrencyContainerId;
    struct Dictionary_2_System_String_System_Int32_* VirtualCurrencyPreviousBalances;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityVirtualCurrencyBalancesChangedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityVirtualCurrencyBalancesChangedEventData__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/EntityLineage_1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EntityVirtualCurrencyBalancesChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityVirtualCurrencyBalancesChangedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityVirtualCurrencyBalancesChangedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/EntityVirtualCurrencyBalancesChangedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityVirtualCurrencyBalancesChangedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
