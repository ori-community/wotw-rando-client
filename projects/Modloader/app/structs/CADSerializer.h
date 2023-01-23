#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADSerializer_DEFINED)
#define IL2CPP_STRUCT_CADSerializer_DEFINED
struct CADSerializer__Class;
struct CADSerializer {
    struct CADSerializer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CADSerializer_FWDDECL)
#define IL2CPP_STRUCT_CADSerializer_FWDDECL
#include <Modloader/app/structs/CADSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_CADSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADSerializer_DEFINED) && !defined(IL2CPP_STRUCT_CADSerializer_FWDDECL)
#include <Modloader/app/structs/CADSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
