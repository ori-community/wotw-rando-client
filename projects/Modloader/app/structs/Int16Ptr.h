#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Int16Ptr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Int16Ptr_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16Ptr_DEFINED)
#define IL2CPP_STRUCT_Int16Ptr_DEFINED
struct Int16Ptr__Class;
struct Int16Ptr {
    struct Int16Ptr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Int16Ptr_FWDDECL)
#define IL2CPP_STRUCT_Int16Ptr_FWDDECL
#include <Modloader/app/structs/Int16Ptr__Class.h>
#endif
#undef IL2CPP_STRUCT_Int16Ptr_INITIALIZING
#if !defined(IL2CPP_STRUCT_Int16Ptr_DEFINED) && !defined(IL2CPP_STRUCT_Int16Ptr_FWDDECL)
#include <Modloader/app/structs/Int16Ptr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Int16Ptr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
