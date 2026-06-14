#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SByte__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SByte__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByte__Boxed_DEFINED)
#define IL2CPP_STRUCT_SByte__Boxed_DEFINED
struct SByte__Class;
struct SByte__Boxed {
    struct SByte__Class* klass;
    MonitorData* monitor;
    int8_t fields;
};
#endif
#if !defined(IL2CPP_STRUCT_SByte__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SByte__Boxed_FWDDECL
#include <Modloader/app/structs/SByte__Class.h>
#endif
#undef IL2CPP_STRUCT_SByte__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SByte__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SByte__Boxed_FWDDECL)
#include <Modloader/app/structs/SByte__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SByte__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
