#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShrineEntrance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShrineEntrance_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineEntrance_DEFINED)
#include <Modloader/app/structs/ShrineEntrance__Fields.h>
#if defined(IL2CPP_STRUCT_ShrineEntrance__Fields_DEFINED)
#define IL2CPP_STRUCT_ShrineEntrance_DEFINED
struct ShrineEntrance__Class;
struct ShrineEntrance {
    struct ShrineEntrance__Class* klass;
    MonitorData* monitor;
    struct ShrineEntrance__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShrineEntrance_FWDDECL)
#define IL2CPP_STRUCT_ShrineEntrance_FWDDECL
#include <Modloader/app/structs/ShrineEntrance__Class.h>
#endif
#undef IL2CPP_STRUCT_ShrineEntrance_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShrineEntrance_DEFINED) && !defined(IL2CPP_STRUCT_ShrineEntrance_FWDDECL)
#include <Modloader/app/structs/ShrineEntrance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShrineEntrance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
