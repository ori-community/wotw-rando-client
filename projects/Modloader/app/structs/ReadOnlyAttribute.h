#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReadOnlyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReadOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadOnlyAttribute_DEFINED)
#include <Modloader/app/structs/ReadOnlyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ReadOnlyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ReadOnlyAttribute_DEFINED
struct ReadOnlyAttribute__Class;
struct ReadOnlyAttribute {
    struct ReadOnlyAttribute__Class* klass;
    MonitorData* monitor;
    struct ReadOnlyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReadOnlyAttribute_FWDDECL)
#define IL2CPP_STRUCT_ReadOnlyAttribute_FWDDECL
#include <Modloader/app/structs/ReadOnlyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ReadOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReadOnlyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ReadOnlyAttribute_FWDDECL)
#include <Modloader/app/structs/ReadOnlyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReadOnlyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
