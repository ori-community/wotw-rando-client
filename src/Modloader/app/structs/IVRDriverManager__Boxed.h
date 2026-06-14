#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRDriverManager__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRDriverManager__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRDriverManager__Boxed_DEFINED)
#include <Modloader/app/structs/IVRDriverManager.h>
#if defined(IL2CPP_STRUCT_IVRDriverManager_DEFINED)
#define IL2CPP_STRUCT_IVRDriverManager__Boxed_DEFINED
struct IVRDriverManager__Class;
struct IVRDriverManager__Boxed {
    struct IVRDriverManager__Class* klass;
    MonitorData* monitor;
    struct IVRDriverManager fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRDriverManager__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IVRDriverManager__Boxed_FWDDECL
#include <Modloader/app/structs/IVRDriverManager__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRDriverManager__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRDriverManager__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IVRDriverManager__Boxed_FWDDECL)
#include <Modloader/app/structs/IVRDriverManager__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRDriverManager__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
