#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int64Ptr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int64Ptr_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64Ptr_DEFINED)
#define IL2CPP_STRUCT_Int64Ptr_DEFINED
struct Int64Ptr__Class;
struct Int64Ptr {
    struct Int64Ptr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Int64Ptr_FWDDECL)
#define IL2CPP_STRUCT_Int64Ptr_FWDDECL
#include <Modloader/app/structs/Int64Ptr__Class.h>
#endif
#undef IL2CPP_STRUCT_Int64Ptr_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int64Ptr_DEFINED) && !defined(IL2CPP_STRUCT_Int64Ptr_FWDDECL)
#include <Modloader/app/structs/Int64Ptr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int64Ptr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
