#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatLUT__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatLUT__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatLUT__Boxed_DEFINED)
#include <Modloader/app/structs/FloatLUT.h>
#if defined(IL2CPP_STRUCT_FloatLUT_DEFINED)
#define IL2CPP_STRUCT_FloatLUT__Boxed_DEFINED
struct FloatLUT__Class;
struct FloatLUT__Boxed {
    struct FloatLUT__Class* klass;
    MonitorData* monitor;
    struct FloatLUT fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatLUT__Boxed_FWDDECL)
#define IL2CPP_STRUCT_FloatLUT__Boxed_FWDDECL
#include <Modloader/app/structs/FloatLUT__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatLUT__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatLUT__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_FloatLUT__Boxed_FWDDECL)
#include <Modloader/app/structs/FloatLUT__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatLUT__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
