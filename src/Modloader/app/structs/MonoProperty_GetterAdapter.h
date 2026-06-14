#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoProperty_GetterAdapter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoProperty_GetterAdapter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoProperty_GetterAdapter_DEFINED)
#include <Modloader/app/structs/MonoProperty_GetterAdapter__Fields.h>
#if defined(IL2CPP_STRUCT_MonoProperty_GetterAdapter__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoProperty_GetterAdapter_DEFINED
struct MonoProperty_GetterAdapter__Class;
struct MonoProperty_GetterAdapter {
    struct MonoProperty_GetterAdapter__Class* klass;
    MonitorData* monitor;
    struct MonoProperty_GetterAdapter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoProperty_GetterAdapter_FWDDECL)
#define IL2CPP_STRUCT_MonoProperty_GetterAdapter_FWDDECL
#include <Modloader/app/structs/MonoProperty_GetterAdapter__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoProperty_GetterAdapter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoProperty_GetterAdapter_DEFINED) && !defined(IL2CPP_STRUCT_MonoProperty_GetterAdapter_FWDDECL)
#include <Modloader/app/structs/MonoProperty_GetterAdapter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoProperty_GetterAdapter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
