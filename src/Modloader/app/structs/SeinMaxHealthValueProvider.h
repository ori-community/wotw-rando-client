#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinMaxHealthValueProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinMaxHealthValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMaxHealthValueProvider_DEFINED)
#include <Modloader/app/structs/SeinMaxHealthValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SeinMaxHealthValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinMaxHealthValueProvider_DEFINED
struct SeinMaxHealthValueProvider__Class;
struct SeinMaxHealthValueProvider {
    struct SeinMaxHealthValueProvider__Class* klass;
    MonitorData* monitor;
    struct SeinMaxHealthValueProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinMaxHealthValueProvider_FWDDECL)
#define IL2CPP_STRUCT_SeinMaxHealthValueProvider_FWDDECL
#include <Modloader/app/structs/SeinMaxHealthValueProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinMaxHealthValueProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMaxHealthValueProvider_DEFINED) && !defined(IL2CPP_STRUCT_SeinMaxHealthValueProvider_FWDDECL)
#include <Modloader/app/structs/SeinMaxHealthValueProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinMaxHealthValueProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
