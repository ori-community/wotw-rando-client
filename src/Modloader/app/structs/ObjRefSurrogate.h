#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjRefSurrogate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjRefSurrogate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjRefSurrogate_DEFINED)
#define IL2CPP_STRUCT_ObjRefSurrogate_DEFINED
struct ObjRefSurrogate__Class;
struct ObjRefSurrogate {
    struct ObjRefSurrogate__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjRefSurrogate_FWDDECL)
#define IL2CPP_STRUCT_ObjRefSurrogate_FWDDECL
#include <Modloader/app/structs/ObjRefSurrogate__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjRefSurrogate_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjRefSurrogate_DEFINED) && !defined(IL2CPP_STRUCT_ObjRefSurrogate_FWDDECL)
#include <Modloader/app/structs/ObjRefSurrogate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjRefSurrogate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
