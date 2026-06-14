#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FormatterServices__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FormatterServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterServices__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FormatterServices__StaticFields_DEFINED
struct ConcurrentDictionary_2_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo_;
struct Type__Array;
struct Binder;
struct FormatterServices__StaticFields {
    struct ConcurrentDictionary_2_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo_* m_MemberInfoTable;
    bool unsafeTypeForwardersIsEnabled;
    bool unsafeTypeForwardersIsEnabledInitialized;
    struct Type__Array* advancedTypes;
    struct Binder* s_binder;
};
#endif
#if !defined(IL2CPP_STRUCT_FormatterServices__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FormatterServices__StaticFields_FWDDECL
#include <Modloader/app/structs/Binder.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_System_Runtime_Serialization_MemberHolde_Syste_Reflectio_MemberInf_.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_FormatterServices__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FormatterServices__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FormatterServices__StaticFields_FWDDECL)
#include <Modloader/app/structs/FormatterServices__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FormatterServices__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
