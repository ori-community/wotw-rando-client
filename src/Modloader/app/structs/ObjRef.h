#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjRef_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjRef_DEFINED)
#include <Modloader/app/structs/ObjRef__Fields.h>
#if defined(IL2CPP_STRUCT_ObjRef__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjRef_DEFINED
struct ObjRef__Class;
struct ObjRef {
    struct ObjRef__Class* klass;
    MonitorData* monitor;
    struct ObjRef__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjRef_FWDDECL)
#define IL2CPP_STRUCT_ObjRef_FWDDECL
#include <Modloader/app/structs/ObjRef__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjRef_DEFINED) && !defined(IL2CPP_STRUCT_ObjRef_FWDDECL)
#include <Modloader/app/structs/ObjRef.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjRef.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
