#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PaddedHeadAndTail__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PaddedHeadAndTail__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaddedHeadAndTail__Boxed_DEFINED)
#include <Modloader/app/structs/PaddedHeadAndTail.h>
#if defined(IL2CPP_STRUCT_PaddedHeadAndTail_DEFINED)
#define IL2CPP_STRUCT_PaddedHeadAndTail__Boxed_DEFINED
struct PaddedHeadAndTail__Class;
struct PaddedHeadAndTail__Boxed {
    struct PaddedHeadAndTail__Class* klass;
    MonitorData* monitor;
    struct PaddedHeadAndTail fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PaddedHeadAndTail__Boxed_FWDDECL)
#define IL2CPP_STRUCT_PaddedHeadAndTail__Boxed_FWDDECL
#include <Modloader/app/structs/PaddedHeadAndTail__Class.h>
#endif
#undef IL2CPP_STRUCT_PaddedHeadAndTail__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_PaddedHeadAndTail__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_PaddedHeadAndTail__Boxed_FWDDECL)
#include <Modloader/app/structs/PaddedHeadAndTail__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PaddedHeadAndTail__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
