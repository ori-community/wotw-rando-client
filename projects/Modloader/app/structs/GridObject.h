#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GridObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GridObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridObject_DEFINED)
#include <Modloader/app/structs/GridObject__Fields.h>
#if defined(IL2CPP_STRUCT_GridObject__Fields_DEFINED)
#define IL2CPP_STRUCT_GridObject_DEFINED
struct GridObject__Class;
struct GridObject {
    struct GridObject__Class* klass;
    MonitorData* monitor;
    struct GridObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GridObject_FWDDECL)
#define IL2CPP_STRUCT_GridObject_FWDDECL
#include <Modloader/app/structs/GridObject__Class.h>
#endif
#undef IL2CPP_STRUCT_GridObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridObject_DEFINED) && !defined(IL2CPP_STRUCT_GridObject_FWDDECL)
#include <Modloader/app/structs/GridObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GridObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
