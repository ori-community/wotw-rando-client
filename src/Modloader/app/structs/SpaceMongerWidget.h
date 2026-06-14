#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpaceMongerWidget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpaceMongerWidget_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpaceMongerWidget_DEFINED)
#include <Modloader/app/structs/SpaceMongerWidget__Fields.h>
#if defined(IL2CPP_STRUCT_SpaceMongerWidget__Fields_DEFINED)
#define IL2CPP_STRUCT_SpaceMongerWidget_DEFINED
struct SpaceMongerWidget__Class;
struct SpaceMongerWidget {
    struct SpaceMongerWidget__Class* klass;
    MonitorData* monitor;
    struct SpaceMongerWidget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpaceMongerWidget_FWDDECL)
#define IL2CPP_STRUCT_SpaceMongerWidget_FWDDECL
#include <Modloader/app/structs/SpaceMongerWidget__Class.h>
#endif
#undef IL2CPP_STRUCT_SpaceMongerWidget_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpaceMongerWidget_DEFINED) && !defined(IL2CPP_STRUCT_SpaceMongerWidget_FWDDECL)
#include <Modloader/app/structs/SpaceMongerWidget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpaceMongerWidget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
