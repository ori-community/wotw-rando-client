#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreserveSigAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreserveSigAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreserveSigAttribute_DEFINED)
#define IL2CPP_STRUCT_PreserveSigAttribute_DEFINED
struct PreserveSigAttribute__Class;
struct PreserveSigAttribute {
    struct PreserveSigAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PreserveSigAttribute_FWDDECL)
#define IL2CPP_STRUCT_PreserveSigAttribute_FWDDECL
#include <Modloader/app/structs/PreserveSigAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_PreserveSigAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreserveSigAttribute_DEFINED) && !defined(IL2CPP_STRUCT_PreserveSigAttribute_FWDDECL)
#include <Modloader/app/structs/PreserveSigAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreserveSigAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
