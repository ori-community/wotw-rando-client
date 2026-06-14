#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManualResetEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManualResetEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManualResetEvent__Fields_DEFINED)
#include <Modloader/app/structs/EventWaitHandle__Fields.h>
#if defined(IL2CPP_STRUCT_EventWaitHandle__Fields_DEFINED)
#define IL2CPP_STRUCT_ManualResetEvent__Fields_DEFINED
struct ManualResetEvent__Fields {
    struct EventWaitHandle__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManualResetEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_ManualResetEvent__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ManualResetEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManualResetEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ManualResetEvent__Fields_FWDDECL)
#include <Modloader/app/structs/ManualResetEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManualResetEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
