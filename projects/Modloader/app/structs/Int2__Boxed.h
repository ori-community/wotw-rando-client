#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int2__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int2__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int2__Boxed_DEFINED)
#include <Modloader/app/structs/Int2.h>
#if defined(IL2CPP_STRUCT_Int2_DEFINED)
#define IL2CPP_STRUCT_Int2__Boxed_DEFINED
struct Int2__Class;
struct Int2__Boxed {
    struct Int2__Class* klass;
    MonitorData* monitor;
    struct Int2 fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Int2__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Int2__Boxed_FWDDECL
#include <Modloader/app/structs/Int2__Class.h>
#endif
#undef IL2CPP_STRUCT_Int2__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int2__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Int2__Boxed_FWDDECL)
#include <Modloader/app/structs/Int2__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int2__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
