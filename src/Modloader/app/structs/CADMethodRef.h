#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADMethodRef_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADMethodRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMethodRef_DEFINED)
#include <Modloader/app/structs/CADMethodRef__Fields.h>
#if defined(IL2CPP_STRUCT_CADMethodRef__Fields_DEFINED)
#define IL2CPP_STRUCT_CADMethodRef_DEFINED
struct CADMethodRef__Class;
struct CADMethodRef {
    struct CADMethodRef__Class* klass;
    MonitorData* monitor;
    struct CADMethodRef__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CADMethodRef_FWDDECL)
#define IL2CPP_STRUCT_CADMethodRef_FWDDECL
#include <Modloader/app/structs/CADMethodRef__Class.h>
#endif
#undef IL2CPP_STRUCT_CADMethodRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMethodRef_DEFINED) && !defined(IL2CPP_STRUCT_CADMethodRef_FWDDECL)
#include <Modloader/app/structs/CADMethodRef.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADMethodRef.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
