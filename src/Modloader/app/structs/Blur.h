#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Blur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Blur_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blur_DEFINED)
#include <Modloader/app/structs/Blur__Fields.h>
#if defined(IL2CPP_STRUCT_Blur__Fields_DEFINED)
#define IL2CPP_STRUCT_Blur_DEFINED
struct Blur__Class;
struct Blur {
    struct Blur__Class* klass;
    MonitorData* monitor;
    struct Blur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Blur_FWDDECL)
#define IL2CPP_STRUCT_Blur_FWDDECL
#include <Modloader/app/structs/Blur__Class.h>
#endif
#undef IL2CPP_STRUCT_Blur_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blur_DEFINED) && !defined(IL2CPP_STRUCT_Blur_FWDDECL)
#include <Modloader/app/structs/Blur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Blur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
