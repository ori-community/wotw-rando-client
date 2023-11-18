#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTypeExtraData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTypeExtraData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTypeExtraData__Boxed_DEFINED)
#include <Modloader/app/structs/MoonTypeExtraData.h>
#if defined(IL2CPP_STRUCT_MoonTypeExtraData_DEFINED)
#define IL2CPP_STRUCT_MoonTypeExtraData__Boxed_DEFINED
struct MoonTypeExtraData__Class;
struct MoonTypeExtraData__Boxed {
    struct MoonTypeExtraData__Class* klass;
    MonitorData* monitor;
    struct MoonTypeExtraData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTypeExtraData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MoonTypeExtraData__Boxed_FWDDECL
#include <Modloader/app/structs/MoonTypeExtraData__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTypeExtraData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTypeExtraData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MoonTypeExtraData__Boxed_FWDDECL)
#include <Modloader/app/structs/MoonTypeExtraData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTypeExtraData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
