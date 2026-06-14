#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Index_c_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Index_c_INITIALIZING
#if !defined(IL2CPP_STRUCT_Index_c_DEFINED)
#define IL2CPP_STRUCT_Index_c_DEFINED
struct Index_c__Class;
struct Index_c {
    struct Index_c__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Index_c_FWDDECL)
#define IL2CPP_STRUCT_Index_c_FWDDECL
#include <Modloader/app/structs/Index_c__Class.h>
#endif
#undef IL2CPP_STRUCT_Index_c_INITIALIZING
#if !defined(IL2CPP_STRUCT_Index_c_DEFINED) && !defined(IL2CPP_STRUCT_Index_c_FWDDECL)
#include <Modloader/app/structs/Index_c.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Index_c.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
