#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UGCHandle_t__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UGCHandle_t__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UGCHandle_t__Boxed_DEFINED)
#include <Modloader/app/structs/UGCHandle_t.h>
#if defined(IL2CPP_STRUCT_UGCHandle_t_DEFINED)
#define IL2CPP_STRUCT_UGCHandle_t__Boxed_DEFINED
struct UGCHandle_t__Class;
struct UGCHandle_t__Boxed {
    struct UGCHandle_t__Class* klass;
    MonitorData* monitor;
    struct UGCHandle_t fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UGCHandle_t__Boxed_FWDDECL)
#define IL2CPP_STRUCT_UGCHandle_t__Boxed_FWDDECL
#include <Modloader/app/structs/UGCHandle_t__Class.h>
#endif
#undef IL2CPP_STRUCT_UGCHandle_t__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UGCHandle_t__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_UGCHandle_t__Boxed_FWDDECL)
#include <Modloader/app/structs/UGCHandle_t__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UGCHandle_t__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
