#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HServerQuery__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HServerQuery__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HServerQuery__Boxed_DEFINED)
#include <Modloader/app/structs/HServerQuery.h>
#if defined(IL2CPP_STRUCT_HServerQuery_DEFINED)
#define IL2CPP_STRUCT_HServerQuery__Boxed_DEFINED
struct HServerQuery__Class;
struct HServerQuery__Boxed {
    struct HServerQuery__Class* klass;
    MonitorData* monitor;
    struct HServerQuery fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HServerQuery__Boxed_FWDDECL)
#define IL2CPP_STRUCT_HServerQuery__Boxed_FWDDECL
#include <Modloader/app/structs/HServerQuery__Class.h>
#endif
#undef IL2CPP_STRUCT_HServerQuery__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HServerQuery__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_HServerQuery__Boxed_FWDDECL)
#include <Modloader/app/structs/HServerQuery__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HServerQuery__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
