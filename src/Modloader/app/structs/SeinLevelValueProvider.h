#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLevelValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLevelValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLevelValueProvider_DEFINED)
#include <Modloader/app/structs/SeinLevelValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLevelValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLevelValueProvider_DEFINED
struct SeinLevelValueProvider__Class;
struct SeinLevelValueProvider {
    struct SeinLevelValueProvider__Class* klass;
    MonitorData* monitor;
    struct SeinLevelValueProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLevelValueProvider_FWDDECL)
#define IL2CPP_STRUCT_SeinLevelValueProvider_FWDDECL
#include <Modloader/app/structs/SeinLevelValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLevelValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLevelValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_SeinLevelValueProvider_FWDDECL)
#include <Modloader/app/structs/SeinLevelValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLevelValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
