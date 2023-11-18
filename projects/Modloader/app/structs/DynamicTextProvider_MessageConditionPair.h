#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicTextProvider_MessageConditionPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicTextProvider_MessageConditionPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicTextProvider_MessageConditionPair_DEFINED)
#define IL2CPP_STRUCT_DynamicTextProvider_MessageConditionPair_DEFINED
struct MessageProvider;
struct Condition_1;
struct DynamicTextProvider_MessageConditionPair {
    struct MessageProvider* MessageProvider;
    struct Condition_1* Condition;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicTextProvider_MessageConditionPair_FWDDECL)
#define IL2CPP_STRUCT_DynamicTextProvider_MessageConditionPair_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_DynamicTextProvider_MessageConditionPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicTextProvider_MessageConditionPair_DEFINED) && !defined(IL2CPP_STRUCT_DynamicTextProvider_MessageConditionPair_FWDDECL)
#include <Modloader/app/structs/DynamicTextProvider_MessageConditionPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicTextProvider_MessageConditionPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
