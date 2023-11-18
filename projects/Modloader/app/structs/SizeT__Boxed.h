#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SizeT__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SizeT__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SizeT__Boxed_DEFINED)
#include <Modloader/app/structs/SizeT.h>
#if defined(IL2CPP_STRUCT_SizeT_DEFINED)
#define IL2CPP_STRUCT_SizeT__Boxed_DEFINED
struct SizeT__Class;
struct SizeT__Boxed {
    struct SizeT__Class* klass;
    MonitorData* monitor;
    struct SizeT fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SizeT__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SizeT__Boxed_FWDDECL
#include <Modloader/app/structs/SizeT__Class.h>
#endif
#undef IL2CPP_STRUCT_SizeT__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SizeT__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SizeT__Boxed_FWDDECL)
#include <Modloader/app/structs/SizeT__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SizeT__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
