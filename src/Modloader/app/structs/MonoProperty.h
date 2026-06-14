#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoProperty_DEFINED)
#include <Modloader/app/structs/MonoProperty__Fields.h>
#if defined(IL2CPP_STRUCT_MonoProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoProperty_DEFINED
struct MonoProperty__Class;
struct MonoProperty {
    struct MonoProperty__Class* klass;
    MonitorData* monitor;
    struct MonoProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoProperty_FWDDECL)
#define IL2CPP_STRUCT_MonoProperty_FWDDECL
#include <Modloader/app/structs/MonoProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoProperty_DEFINED) && !defined(IL2CPP_STRUCT_MonoProperty_FWDDECL)
#include <Modloader/app/structs/MonoProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
