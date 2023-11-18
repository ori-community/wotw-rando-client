#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UsedByNativeCodeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UsedByNativeCodeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UsedByNativeCodeAttribute_DEFINED)
#include <Modloader/app/structs/UsedByNativeCodeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_UsedByNativeCodeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_UsedByNativeCodeAttribute_DEFINED
struct UsedByNativeCodeAttribute__Class;
struct UsedByNativeCodeAttribute {
    struct UsedByNativeCodeAttribute__Class* klass;
    MonitorData* monitor;
    struct UsedByNativeCodeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UsedByNativeCodeAttribute_FWDDECL)
#define IL2CPP_STRUCT_UsedByNativeCodeAttribute_FWDDECL
#include <Modloader/app/structs/UsedByNativeCodeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_UsedByNativeCodeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UsedByNativeCodeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_UsedByNativeCodeAttribute_FWDDECL)
#include <Modloader/app/structs/UsedByNativeCodeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UsedByNativeCodeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
