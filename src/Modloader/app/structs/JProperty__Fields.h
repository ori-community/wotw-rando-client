#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JProperty__Fields_DEFINED)
#include <Modloader/app/structs/JContainer__Fields.h>
#if defined(IL2CPP_STRUCT_JContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_JProperty__Fields_DEFINED
struct JProperty_JPropertyList;
struct String;
struct JProperty__Fields {
    struct JContainer__Fields _;
    struct JProperty_JPropertyList* _content;
    struct String* _name;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_JProperty__Fields_FWDDECL
#include <Modloader/app/structs/JProperty_JPropertyList.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JProperty__Fields_FWDDECL)
#include <Modloader/app/structs/JProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
