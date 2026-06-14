#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADMessageBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADMessageBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMessageBase_DEFINED)
#include <Modloader/app/structs/CADMessageBase__Fields.h>
#if defined(IL2CPP_STRUCT_CADMessageBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CADMessageBase_DEFINED
struct CADMessageBase__Class;
struct CADMessageBase {
    struct CADMessageBase__Class* klass;
    MonitorData* monitor;
    struct CADMessageBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CADMessageBase_FWDDECL)
#define IL2CPP_STRUCT_CADMessageBase_FWDDECL
#include <Modloader/app/structs/CADMessageBase__Class.h>
#endif
#undef IL2CPP_STRUCT_CADMessageBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADMessageBase_DEFINED) && !defined(IL2CPP_STRUCT_CADMessageBase_FWDDECL)
#include <Modloader/app/structs/CADMessageBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADMessageBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
