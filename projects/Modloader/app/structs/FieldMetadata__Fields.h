#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldMetadata__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldMetadata__Fields_DEFINED)
#include <Modloader/app/structs/EventFieldTags__Enum.h>
#if defined(IL2CPP_STRUCT_EventFieldTags__Enum_DEFINED)
#define IL2CPP_STRUCT_FieldMetadata__Fields_DEFINED
struct String;
struct Byte__Array;
struct __declspec(align(8)) FieldMetadata__Fields {
    struct String* name;
    int32_t nameSize;
    EventFieldTags__Enum tags;

    struct Byte__Array* custom;
    uint16_t fixedCount;
    uint8_t inType;
    uint8_t outType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FieldMetadata__Fields_FWDDECL)
#define IL2CPP_STRUCT_FieldMetadata__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FieldMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldMetadata__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FieldMetadata__Fields_FWDDECL)
#include <Modloader/app/structs/FieldMetadata__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldMetadata__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
