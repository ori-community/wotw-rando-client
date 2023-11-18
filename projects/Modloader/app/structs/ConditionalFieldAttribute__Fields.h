#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_DEFINED
struct String;
struct Object;
struct __declspec(align(8)) ConditionalFieldAttribute__Fields {
    struct String* _FieldName_k__BackingField;
    struct Object* _Value_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalFieldAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/ConditionalFieldAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalFieldAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
