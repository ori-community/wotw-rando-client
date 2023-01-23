#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RequiredByNativeCodeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RequiredByNativeCodeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequiredByNativeCodeAttribute_DEFINED)
#include <Modloader/app/structs/RequiredByNativeCodeAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_RequiredByNativeCodeAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_RequiredByNativeCodeAttribute_DEFINED
struct RequiredByNativeCodeAttribute__Class;
struct RequiredByNativeCodeAttribute {
    struct RequiredByNativeCodeAttribute__Class* klass;
    MonitorData* monitor;
    struct RequiredByNativeCodeAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RequiredByNativeCodeAttribute_FWDDECL)
#define IL2CPP_STRUCT_RequiredByNativeCodeAttribute_FWDDECL
#include <Modloader/app/structs/RequiredByNativeCodeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_RequiredByNativeCodeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RequiredByNativeCodeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_RequiredByNativeCodeAttribute_FWDDECL)
#include <Modloader/app/structs/RequiredByNativeCodeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RequiredByNativeCodeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
