#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetMemberBinder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetMemberBinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMemberBinder__Fields_DEFINED)
#include <Modloader/app/structs/DynamicMetaObjectBinder__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicMetaObjectBinder__Fields_DEFINED)
#define IL2CPP_STRUCT_SetMemberBinder__Fields_DEFINED
struct String;
struct SetMemberBinder__Fields {
    struct DynamicMetaObjectBinder__Fields _;
    struct String* _Name_k__BackingField;
    bool _IgnoreCase_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetMemberBinder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetMemberBinder__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SetMemberBinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMemberBinder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetMemberBinder__Fields_FWDDECL)
#include <Modloader/app/structs/SetMemberBinder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetMemberBinder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
