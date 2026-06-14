#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldOffsetAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldOffsetAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldOffsetAttribute_DEFINED)
#include <Modloader/app/structs/FieldOffsetAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_FieldOffsetAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_FieldOffsetAttribute_DEFINED
struct FieldOffsetAttribute__Class;
struct FieldOffsetAttribute {
    struct FieldOffsetAttribute__Class* klass;
    MonitorData* monitor;
    struct FieldOffsetAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FieldOffsetAttribute_FWDDECL)
#define IL2CPP_STRUCT_FieldOffsetAttribute_FWDDECL
#include <Modloader/app/structs/FieldOffsetAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_FieldOffsetAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldOffsetAttribute_DEFINED) && !defined(IL2CPP_STRUCT_FieldOffsetAttribute_FWDDECL)
#include <Modloader/app/structs/FieldOffsetAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldOffsetAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
