#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElementWriter__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElementWriter__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElementWriter__Boxed_DEFINED)
#include <Modloader/app/structs/ElementWriter.h>
#if defined(IL2CPP_STRUCT_ElementWriter_DEFINED)
#define IL2CPP_STRUCT_ElementWriter__Boxed_DEFINED
struct ElementWriter__Class;
struct ElementWriter__Boxed {
    struct ElementWriter__Class* klass;
    MonitorData* monitor;
    struct ElementWriter fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ElementWriter__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ElementWriter__Boxed_FWDDECL
#include <Modloader/app/structs/ElementWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_ElementWriter__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElementWriter__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ElementWriter__Boxed_FWDDECL)
#include <Modloader/app/structs/ElementWriter__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElementWriter__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
