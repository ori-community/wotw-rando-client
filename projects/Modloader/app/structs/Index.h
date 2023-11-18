#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Index_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Index_INITIALIZING
#if !defined(IL2CPP_STRUCT_Index_DEFINED)
#include <Modloader/app/structs/Index__Fields.h>
#if defined(IL2CPP_STRUCT_Index__Fields_DEFINED)
#define IL2CPP_STRUCT_Index_DEFINED
struct Index__Class;
struct Index {
    struct Index__Class* klass;
    MonitorData* monitor;
    struct Index__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Index_FWDDECL)
#define IL2CPP_STRUCT_Index_FWDDECL
#include <Modloader/app/structs/Index__Class.h>
#endif
#undef IL2CPP_STRUCT_Index_INITIALIZING
#if !defined(IL2CPP_STRUCT_Index_DEFINED) && !defined(IL2CPP_STRUCT_Index_FWDDECL)
#include <Modloader/app/structs/Index.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Index.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
