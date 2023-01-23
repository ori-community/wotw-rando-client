#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeStringMarshal__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeStringMarshal__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeStringMarshal__Boxed_DEFINED)
#include <Modloader/app/structs/SafeStringMarshal.h>
#if defined(IL2CPP_STRUCT_SafeStringMarshal_DEFINED)
#define IL2CPP_STRUCT_SafeStringMarshal__Boxed_DEFINED
struct SafeStringMarshal__Class;
struct SafeStringMarshal__Boxed {
    struct SafeStringMarshal__Class* klass;
    MonitorData* monitor;
    struct SafeStringMarshal fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeStringMarshal__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SafeStringMarshal__Boxed_FWDDECL
#include <Modloader/app/structs/SafeStringMarshal__Class.h>
#endif
#undef IL2CPP_STRUCT_SafeStringMarshal__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeStringMarshal__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SafeStringMarshal__Boxed_FWDDECL)
#include <Modloader/app/structs/SafeStringMarshal__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeStringMarshal__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
