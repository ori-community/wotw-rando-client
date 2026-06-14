#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoLimitationAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoLimitationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoLimitationAttribute_DEFINED)
#include <Modloader/app/structs/MonoLimitationAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_MonoLimitationAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoLimitationAttribute_DEFINED
struct MonoLimitationAttribute__Class;
struct MonoLimitationAttribute {
    struct MonoLimitationAttribute__Class* klass;
    MonitorData* monitor;
    struct MonoLimitationAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoLimitationAttribute_FWDDECL)
#define IL2CPP_STRUCT_MonoLimitationAttribute_FWDDECL
#include <Modloader/app/structs/MonoLimitationAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoLimitationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoLimitationAttribute_DEFINED) && !defined(IL2CPP_STRUCT_MonoLimitationAttribute_FWDDECL)
#include <Modloader/app/structs/MonoLimitationAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoLimitationAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
