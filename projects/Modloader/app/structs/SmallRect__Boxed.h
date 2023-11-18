#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmallRect__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmallRect__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallRect__Boxed_DEFINED)
#include <Modloader/app/structs/SmallRect.h>
#if defined(IL2CPP_STRUCT_SmallRect_DEFINED)
#define IL2CPP_STRUCT_SmallRect__Boxed_DEFINED
struct SmallRect__Class;
struct SmallRect__Boxed {
    struct SmallRect__Class* klass;
    MonitorData* monitor;
    struct SmallRect fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmallRect__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SmallRect__Boxed_FWDDECL
#include <Modloader/app/structs/SmallRect__Class.h>
#endif
#undef IL2CPP_STRUCT_SmallRect__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallRect__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SmallRect__Boxed_FWDDECL)
#include <Modloader/app/structs/SmallRect__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmallRect__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
