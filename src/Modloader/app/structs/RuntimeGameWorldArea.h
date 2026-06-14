#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeGameWorldArea_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeGameWorldArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGameWorldArea_DEFINED)
#include <Modloader/app/structs/RuntimeGameWorldArea__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeGameWorldArea__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeGameWorldArea_DEFINED
struct RuntimeGameWorldArea__Class;
struct RuntimeGameWorldArea {
    struct RuntimeGameWorldArea__Class* klass;
    MonitorData* monitor;
    struct RuntimeGameWorldArea__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeGameWorldArea_FWDDECL)
#define IL2CPP_STRUCT_RuntimeGameWorldArea_FWDDECL
#include <Modloader/app/structs/RuntimeGameWorldArea__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeGameWorldArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeGameWorldArea_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeGameWorldArea_FWDDECL)
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
