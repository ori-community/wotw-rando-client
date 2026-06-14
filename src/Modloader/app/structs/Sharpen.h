#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sharpen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sharpen_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sharpen_DEFINED)
#include <Modloader/app/structs/Sharpen__Fields.h>
#if defined(IL2CPP_STRUCT_Sharpen__Fields_DEFINED)
#define IL2CPP_STRUCT_Sharpen_DEFINED
struct Sharpen__Class;
struct Sharpen {
    struct Sharpen__Class* klass;
    MonitorData* monitor;
    struct Sharpen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Sharpen_FWDDECL)
#define IL2CPP_STRUCT_Sharpen_FWDDECL
#include <Modloader/app/structs/Sharpen__Class.h>
#endif
#undef IL2CPP_STRUCT_Sharpen_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sharpen_DEFINED) && !defined(IL2CPP_STRUCT_Sharpen_FWDDECL)
#include <Modloader/app/structs/Sharpen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sharpen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
