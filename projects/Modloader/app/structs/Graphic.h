#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Graphic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Graphic_INITIALIZING
#if !defined(IL2CPP_STRUCT_Graphic_DEFINED)
#include <Modloader/app/structs/Graphic__Fields.h>
#if defined(IL2CPP_STRUCT_Graphic__Fields_DEFINED)
#define IL2CPP_STRUCT_Graphic_DEFINED
struct Graphic__Class;
struct Graphic {
    struct Graphic__Class* klass;
    MonitorData* monitor;
    struct Graphic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Graphic_FWDDECL)
#define IL2CPP_STRUCT_Graphic_FWDDECL
#include <Modloader/app/structs/Graphic__Class.h>
#endif
#undef IL2CPP_STRUCT_Graphic_INITIALIZING
#if !defined(IL2CPP_STRUCT_Graphic_DEFINED) && !defined(IL2CPP_STRUCT_Graphic_FWDDECL)
#include <Modloader/app/structs/Graphic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Graphic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
