#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Selectable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Selectable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Selectable_DEFINED)
#include <Modloader/app/structs/Selectable__Fields.h>
#if defined(IL2CPP_STRUCT_Selectable__Fields_DEFINED)
#define IL2CPP_STRUCT_Selectable_DEFINED
struct Selectable__Class;
struct Selectable {
    struct Selectable__Class* klass;
    MonitorData* monitor;
    struct Selectable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Selectable_FWDDECL)
#define IL2CPP_STRUCT_Selectable_FWDDECL
#include <Modloader/app/structs/Selectable__Class.h>
#endif
#undef IL2CPP_STRUCT_Selectable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Selectable_DEFINED) && !defined(IL2CPP_STRUCT_Selectable_FWDDECL)
#include <Modloader/app/structs/Selectable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Selectable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
