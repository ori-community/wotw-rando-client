#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Pixelate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Pixelate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pixelate_DEFINED)
#include <Modloader/app/structs/Pixelate__Fields.h>
#if defined(IL2CPP_STRUCT_Pixelate__Fields_DEFINED)
#define IL2CPP_STRUCT_Pixelate_DEFINED
struct Pixelate__Class;
struct Pixelate {
    struct Pixelate__Class* klass;
    MonitorData* monitor;
    struct Pixelate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Pixelate_FWDDECL)
#define IL2CPP_STRUCT_Pixelate_FWDDECL
#include <Modloader/app/structs/Pixelate__Class.h>
#endif
#undef IL2CPP_STRUCT_Pixelate_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pixelate_DEFINED) && !defined(IL2CPP_STRUCT_Pixelate_FWDDECL)
#include <Modloader/app/structs/Pixelate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Pixelate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
