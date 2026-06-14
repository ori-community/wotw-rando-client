#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumOrderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumOrderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumOrderAttribute_DEFINED)
#include <Modloader/app/structs/EnumOrderAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_EnumOrderAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumOrderAttribute_DEFINED
struct EnumOrderAttribute__Class;
struct EnumOrderAttribute {
    struct EnumOrderAttribute__Class* klass;
    MonitorData* monitor;
    struct EnumOrderAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnumOrderAttribute_FWDDECL)
#define IL2CPP_STRUCT_EnumOrderAttribute_FWDDECL
#include <Modloader/app/structs/EnumOrderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumOrderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumOrderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EnumOrderAttribute_FWDDECL)
#include <Modloader/app/structs/EnumOrderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumOrderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
