#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UInt16Ptr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UInt16Ptr_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16Ptr_DEFINED)
#define IL2CPP_STRUCT_UInt16Ptr_DEFINED
struct UInt16Ptr__Class;
struct UInt16Ptr {
    struct UInt16Ptr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UInt16Ptr_FWDDECL)
#define IL2CPP_STRUCT_UInt16Ptr_FWDDECL
#include <Modloader/app/structs/UInt16Ptr__Class.h>
#endif
#undef IL2CPP_STRUCT_UInt16Ptr_INITIALIZING
#if !defined(IL2CPP_STRUCT_UInt16Ptr_DEFINED) && !defined(IL2CPP_STRUCT_UInt16Ptr_FWDDECL)
#include <Modloader/app/structs/UInt16Ptr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UInt16Ptr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
