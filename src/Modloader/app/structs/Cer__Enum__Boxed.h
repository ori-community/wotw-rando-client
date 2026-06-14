#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cer__Enum__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cer__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cer__Enum__Boxed_DEFINED)
#include <Modloader/app/structs/Cer__Enum.h>
#if defined(IL2CPP_STRUCT_Cer__Enum_DEFINED)
#define IL2CPP_STRUCT_Cer__Enum__Boxed_DEFINED
struct Cer__Enum__Class;
struct Cer__Enum__Boxed {
    struct Cer__Enum__Class* klass;
    MonitorData* monitor;
    Cer__Enum value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Cer__Enum__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Cer__Enum__Boxed_FWDDECL
#include <Modloader/app/structs/Cer__Enum__Class.h>
#endif
#undef IL2CPP_STRUCT_Cer__Enum__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cer__Enum__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Cer__Enum__Boxed_FWDDECL)
#include <Modloader/app/structs/Cer__Enum__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cer__Enum__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
