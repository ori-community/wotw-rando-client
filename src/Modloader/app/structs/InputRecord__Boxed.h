#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputRecord__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputRecord__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputRecord__Boxed_DEFINED)
#include <Modloader/app/structs/InputRecord.h>
#if defined(IL2CPP_STRUCT_InputRecord_DEFINED)
#define IL2CPP_STRUCT_InputRecord__Boxed_DEFINED
struct InputRecord__Class;
struct InputRecord__Boxed {
    struct InputRecord__Class* klass;
    MonitorData* monitor;
    struct InputRecord fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputRecord__Boxed_FWDDECL)
#define IL2CPP_STRUCT_InputRecord__Boxed_FWDDECL
#include <Modloader/app/structs/InputRecord__Class.h>
#endif
#undef IL2CPP_STRUCT_InputRecord__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputRecord__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_InputRecord__Boxed_FWDDECL)
#include <Modloader/app/structs/InputRecord__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputRecord__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
