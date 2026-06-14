#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_MonoClassPtrPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_MonoClassPtrPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClassPtrPtr_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_MonoClassPtrPtr_DEFINED
struct RuntimeStructs_MonoClassPtrPtr__Class;
struct RuntimeStructs_MonoClassPtrPtr {
    struct RuntimeStructs_MonoClassPtrPtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClassPtrPtr_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_MonoClassPtrPtr_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtrPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_MonoClassPtrPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClassPtrPtr_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClassPtrPtr_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtrPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtrPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
