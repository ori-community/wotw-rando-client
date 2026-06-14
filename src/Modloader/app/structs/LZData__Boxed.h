#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LZData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LZData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LZData__Boxed_DEFINED)
#include <Modloader/app/structs/LZData.h>
#if defined(IL2CPP_STRUCT_LZData_DEFINED)
#define IL2CPP_STRUCT_LZData__Boxed_DEFINED
struct LZData__Class;
struct LZData__Boxed {
    struct LZData__Class* klass;
    MonitorData* monitor;
    struct LZData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LZData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_LZData__Boxed_FWDDECL
#include <Modloader/app/structs/LZData__Class.h>
#endif
#undef IL2CPP_STRUCT_LZData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LZData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_LZData__Boxed_FWDDECL)
#include <Modloader/app/structs/LZData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LZData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
