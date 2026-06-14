#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalizableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalizableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalizableAttribute_DEFINED)
#include <Modloader/app/structs/LocalizableAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_LocalizableAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalizableAttribute_DEFINED
struct LocalizableAttribute__Class;
struct LocalizableAttribute {
    struct LocalizableAttribute__Class* klass;
    MonitorData* monitor;
    struct LocalizableAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalizableAttribute_FWDDECL)
#define IL2CPP_STRUCT_LocalizableAttribute_FWDDECL
#include <Modloader/app/structs/LocalizableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalizableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalizableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_LocalizableAttribute_FWDDECL)
#include <Modloader/app/structs/LocalizableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalizableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
