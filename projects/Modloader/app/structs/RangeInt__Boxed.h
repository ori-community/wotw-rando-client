#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RangeInt__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RangeInt__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeInt__Boxed_DEFINED)
#include <Modloader/app/structs/RangeInt.h>
#if defined(IL2CPP_STRUCT_RangeInt_DEFINED)
#define IL2CPP_STRUCT_RangeInt__Boxed_DEFINED
struct RangeInt__Class;
struct RangeInt__Boxed {
    struct RangeInt__Class* klass;
    MonitorData* monitor;
    struct RangeInt fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RangeInt__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RangeInt__Boxed_FWDDECL
#include <Modloader/app/structs/RangeInt__Class.h>
#endif
#undef IL2CPP_STRUCT_RangeInt__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RangeInt__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RangeInt__Boxed_FWDDECL)
#include <Modloader/app/structs/RangeInt__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RangeInt__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
