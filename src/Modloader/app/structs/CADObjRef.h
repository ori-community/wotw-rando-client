#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADObjRef_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADObjRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADObjRef_DEFINED)
#include <Modloader/app/structs/CADObjRef__Fields.h>
#if defined(IL2CPP_STRUCT_CADObjRef__Fields_DEFINED)
#define IL2CPP_STRUCT_CADObjRef_DEFINED
struct CADObjRef__Class;
struct CADObjRef {
    struct CADObjRef__Class* klass;
    MonitorData* monitor;
    struct CADObjRef__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CADObjRef_FWDDECL)
#define IL2CPP_STRUCT_CADObjRef_FWDDECL
#include <Modloader/app/structs/CADObjRef__Class.h>
#endif
#undef IL2CPP_STRUCT_CADObjRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADObjRef_DEFINED) && !defined(IL2CPP_STRUCT_CADObjRef_FWDDECL)
#include <Modloader/app/structs/CADObjRef.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADObjRef.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
