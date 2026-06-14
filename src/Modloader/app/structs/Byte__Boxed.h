#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Byte__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Byte__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Byte__Boxed_DEFINED)
#define IL2CPP_STRUCT_Byte__Boxed_DEFINED
struct Byte__Class;
struct Byte__Boxed {
    struct Byte__Class* klass;
    MonitorData* monitor;
    uint8_t fields;
};
#endif
#if !defined(IL2CPP_STRUCT_Byte__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Byte__Boxed_FWDDECL
#include <Modloader/app/structs/Byte__Class.h>
#endif
#undef IL2CPP_STRUCT_Byte__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Byte__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Byte__Boxed_FWDDECL)
#include <Modloader/app/structs/Byte__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Byte__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
