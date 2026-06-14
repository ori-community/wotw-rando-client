#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Os__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Os__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Os__Fields_DEFINED)
#define IL2CPP_STRUCT_Os__Fields_DEFINED
struct String;
struct __declspec(align(8)) Os__Fields {
    struct String* _locale_k__BackingField;
    struct String* _expId_k__BackingField;
    int32_t _bootId_k__BackingField;
    struct String* _name_k__BackingField;
    struct String* _ver_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Os__Fields_FWDDECL)
#define IL2CPP_STRUCT_Os__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Os__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Os__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Os__Fields_FWDDECL)
#include <Modloader/app/structs/Os__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Os__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
