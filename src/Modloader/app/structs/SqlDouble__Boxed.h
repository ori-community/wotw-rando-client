#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlDouble__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlDouble__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDouble__Boxed_DEFINED)
#include <Modloader/app/structs/SqlDouble.h>
#if defined(IL2CPP_STRUCT_SqlDouble_DEFINED)
#define IL2CPP_STRUCT_SqlDouble__Boxed_DEFINED
struct SqlDouble__Class;
struct SqlDouble__Boxed {
    struct SqlDouble__Class* klass;
    MonitorData* monitor;
    struct SqlDouble fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlDouble__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlDouble__Boxed_FWDDECL
#include <Modloader/app/structs/SqlDouble__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlDouble__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlDouble__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlDouble__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlDouble__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlDouble__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
