#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IObjectReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IObjectReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_IObjectReference_DEFINED)
#define IL2CPP_STRUCT_IObjectReference_DEFINED
struct IObjectReference__Class;
struct IObjectReference {
    struct IObjectReference__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IObjectReference_FWDDECL)
#define IL2CPP_STRUCT_IObjectReference_FWDDECL
#include <Modloader/app/structs/IObjectReference__Class.h>
#endif
#undef IL2CPP_STRUCT_IObjectReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_IObjectReference_DEFINED) && !defined(IL2CPP_STRUCT_IObjectReference_FWDDECL)
#include <Modloader/app/structs/IObjectReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IObjectReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
