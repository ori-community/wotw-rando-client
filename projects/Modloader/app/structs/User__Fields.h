#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_User__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_User__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_User__Fields_DEFINED)
#define IL2CPP_STRUCT_User__Fields_DEFINED
struct String;
struct __declspec(align(8)) User__Fields {
    struct String* _id_k__BackingField;
    struct String* _localId_k__BackingField;
    struct String* _authId_k__BackingField;
    struct String* _locale_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_User__Fields_FWDDECL)
#define IL2CPP_STRUCT_User__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_User__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_User__Fields_DEFINED) && !defined(IL2CPP_STRUCT_User__Fields_FWDDECL)
#include <Modloader/app/structs/User__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/User__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
