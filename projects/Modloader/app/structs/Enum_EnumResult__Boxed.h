#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enum_EnumResult__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enum_EnumResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_EnumResult__Boxed_DEFINED)
#include <Modloader/app/structs/Enum_EnumResult.h>
#if defined(IL2CPP_STRUCT_Enum_EnumResult_DEFINED)
#define IL2CPP_STRUCT_Enum_EnumResult__Boxed_DEFINED
struct Enum_EnumResult__Class;
struct Enum_EnumResult__Boxed {
    struct Enum_EnumResult__Class* klass;
    MonitorData* monitor;
    struct Enum_EnumResult fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Enum_EnumResult__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Enum_EnumResult__Boxed_FWDDECL
#include <Modloader/app/structs/Enum_EnumResult__Class.h>
#endif
#undef IL2CPP_STRUCT_Enum_EnumResult__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enum_EnumResult__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Enum_EnumResult__Boxed_FWDDECL)
#include <Modloader/app/structs/Enum_EnumResult__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enum_EnumResult__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
