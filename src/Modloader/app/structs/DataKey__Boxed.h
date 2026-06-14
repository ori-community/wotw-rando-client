#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataKey__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataKey__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataKey__Boxed_DEFINED)
#include <Modloader/app/structs/DataKey.h>
#if defined(IL2CPP_STRUCT_DataKey_DEFINED)
#define IL2CPP_STRUCT_DataKey__Boxed_DEFINED
struct DataKey__Class;
struct DataKey__Boxed {
    struct DataKey__Class* klass;
    MonitorData* monitor;
    struct DataKey fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataKey__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DataKey__Boxed_FWDDECL
#include <Modloader/app/structs/DataKey__Class.h>
#endif
#undef IL2CPP_STRUCT_DataKey__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataKey__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DataKey__Boxed_FWDDECL)
#include <Modloader/app/structs/DataKey__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataKey__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
