#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__FieldInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__FieldInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__FieldInfo_DEFINED)
#define IL2CPP_STRUCT__FieldInfo_DEFINED
struct _FieldInfo__Class;
struct _FieldInfo {
    struct _FieldInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__FieldInfo_FWDDECL)
#define IL2CPP_STRUCT__FieldInfo_FWDDECL
#include <Modloader/app/structs/_FieldInfo__Class.h>
#endif
#undef IL2CPP_STRUCT__FieldInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT__FieldInfo_DEFINED) && !defined(IL2CPP_STRUCT__FieldInfo_FWDDECL)
#include <Modloader/app/structs/_FieldInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_FieldInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
