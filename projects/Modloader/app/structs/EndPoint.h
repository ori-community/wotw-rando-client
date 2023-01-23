#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPoint_DEFINED)
#define IL2CPP_STRUCT_EndPoint_DEFINED
struct EndPoint__Class;
struct EndPoint {
    struct EndPoint__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EndPoint_FWDDECL)
#define IL2CPP_STRUCT_EndPoint_FWDDECL
#include <Modloader/app/structs/EndPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_EndPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndPoint_DEFINED) && !defined(IL2CPP_STRUCT_EndPoint_FWDDECL)
#include <Modloader/app/structs/EndPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
