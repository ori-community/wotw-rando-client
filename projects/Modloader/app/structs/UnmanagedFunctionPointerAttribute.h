#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute_DEFINED)
#include <Modloader/app/structs/UnmanagedFunctionPointerAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute_DEFINED
struct UnmanagedFunctionPointerAttribute__Class;
struct UnmanagedFunctionPointerAttribute {
    struct UnmanagedFunctionPointerAttribute__Class* klass;
    MonitorData* monitor;
    struct UnmanagedFunctionPointerAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute_FWDDECL)
#define IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute_FWDDECL
#include <Modloader/app/structs/UnmanagedFunctionPointerAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute_DEFINED) && !defined(IL2CPP_STRUCT_UnmanagedFunctionPointerAttribute_FWDDECL)
#include <Modloader/app/structs/UnmanagedFunctionPointerAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnmanagedFunctionPointerAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
