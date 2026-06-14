#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Decimal__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Decimal__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decimal__Boxed_DEFINED)
#include <Modloader/app/structs/Decimal.h>
#if defined(IL2CPP_STRUCT_Decimal_DEFINED)
#define IL2CPP_STRUCT_Decimal__Boxed_DEFINED
struct Decimal__Class;
struct Decimal__Boxed {
    struct Decimal__Class* klass;
    MonitorData* monitor;
    struct Decimal fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Decimal__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Decimal__Boxed_FWDDECL
#include <Modloader/app/structs/Decimal__Class.h>
#endif
#undef IL2CPP_STRUCT_Decimal__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decimal__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Decimal__Boxed_FWDDECL)
#include <Modloader/app/structs/Decimal__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Decimal__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
