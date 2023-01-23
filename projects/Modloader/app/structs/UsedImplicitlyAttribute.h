#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UsedImplicitlyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UsedImplicitlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UsedImplicitlyAttribute_DEFINED)
#include <Modloader/app/structs/UsedImplicitlyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_UsedImplicitlyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_UsedImplicitlyAttribute_DEFINED
struct UsedImplicitlyAttribute__Class;
struct UsedImplicitlyAttribute {
    struct UsedImplicitlyAttribute__Class* klass;
    MonitorData* monitor;
    struct UsedImplicitlyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UsedImplicitlyAttribute_FWDDECL)
#define IL2CPP_STRUCT_UsedImplicitlyAttribute_FWDDECL
#include <Modloader/app/structs/UsedImplicitlyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_UsedImplicitlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UsedImplicitlyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_UsedImplicitlyAttribute_FWDDECL)
#include <Modloader/app/structs/UsedImplicitlyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UsedImplicitlyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
