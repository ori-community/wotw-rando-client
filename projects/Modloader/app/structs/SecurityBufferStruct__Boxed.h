#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityBufferStruct__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityBufferStruct__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBufferStruct__Boxed_DEFINED)
#include <Modloader/app/structs/SecurityBufferStruct.h>
#if defined(IL2CPP_STRUCT_SecurityBufferStruct_DEFINED)
#define IL2CPP_STRUCT_SecurityBufferStruct__Boxed_DEFINED
struct SecurityBufferStruct__Class;
struct SecurityBufferStruct__Boxed {
    struct SecurityBufferStruct__Class* klass;
    MonitorData* monitor;
    struct SecurityBufferStruct fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecurityBufferStruct__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SecurityBufferStruct__Boxed_FWDDECL
#include <Modloader/app/structs/SecurityBufferStruct__Class.h>
#endif
#undef IL2CPP_STRUCT_SecurityBufferStruct__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityBufferStruct__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SecurityBufferStruct__Boxed_FWDDECL)
#include <Modloader/app/structs/SecurityBufferStruct__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityBufferStruct__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
