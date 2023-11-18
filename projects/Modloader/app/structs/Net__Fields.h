#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Net__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Net__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Net__Fields_DEFINED)
#define IL2CPP_STRUCT_Net__Fields_DEFINED
struct String;
struct __declspec(align(8)) Net__Fields {
    struct String* _provider_k__BackingField;
    struct String* _cost_k__BackingField;
    struct String* _type_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Net__Fields_FWDDECL)
#define IL2CPP_STRUCT_Net__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Net__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Net__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Net__Fields_FWDDECL)
#include <Modloader/app/structs/Net__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Net__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
