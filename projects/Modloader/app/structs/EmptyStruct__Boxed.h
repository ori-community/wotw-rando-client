#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmptyStruct__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmptyStruct__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyStruct__Boxed_DEFINED)
#include <Modloader/app/structs/EmptyStruct.h>
#if defined(IL2CPP_STRUCT_EmptyStruct_DEFINED)
#define IL2CPP_STRUCT_EmptyStruct__Boxed_DEFINED
struct EmptyStruct__Class;
struct EmptyStruct__Boxed {
    struct EmptyStruct__Class* klass;
    MonitorData* monitor;
    struct EmptyStruct fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmptyStruct__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EmptyStruct__Boxed_FWDDECL
#include <Modloader/app/structs/EmptyStruct__Class.h>
#endif
#undef IL2CPP_STRUCT_EmptyStruct__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmptyStruct__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EmptyStruct__Boxed_FWDDECL)
#include <Modloader/app/structs/EmptyStruct__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmptyStruct__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
