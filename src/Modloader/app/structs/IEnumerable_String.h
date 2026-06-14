#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEnumerable_String_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEnumerable_String_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnumerable_String_DEFINED)
#define IL2CPP_STRUCT_IEnumerable_String_DEFINED
struct IEnumerable_String__Class;
struct IEnumerable_String {
    struct IEnumerable_String__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEnumerable_String_FWDDECL)
#define IL2CPP_STRUCT_IEnumerable_String_FWDDECL
#include <Modloader/app/structs/IEnumerable_String__Class.h>
#endif
#undef IL2CPP_STRUCT_IEnumerable_String_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEnumerable_String_DEFINED) && !defined(IL2CPP_STRUCT_IEnumerable_String_FWDDECL)
#include <Modloader/app/structs/IEnumerable_String.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEnumerable_String.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
