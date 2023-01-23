#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeFieldInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeFieldInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeFieldInfo_DEFINED)
#define IL2CPP_STRUCT_RuntimeFieldInfo_DEFINED
struct RuntimeFieldInfo__Class;
struct RuntimeFieldInfo {
    struct RuntimeFieldInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeFieldInfo_FWDDECL)
#define IL2CPP_STRUCT_RuntimeFieldInfo_FWDDECL
#include <Modloader/app/structs/RuntimeFieldInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeFieldInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeFieldInfo_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeFieldInfo_FWDDECL)
#include <Modloader/app/structs/RuntimeFieldInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeFieldInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
