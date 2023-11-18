#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorUtility_DEFINED)
#define IL2CPP_STRUCT_ColorUtility_DEFINED
struct ColorUtility__Class;
struct ColorUtility {
    struct ColorUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ColorUtility_FWDDECL)
#define IL2CPP_STRUCT_ColorUtility_FWDDECL
#include <Modloader/app/structs/ColorUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorUtility_DEFINED) && !defined(IL2CPP_STRUCT_ColorUtility_FWDDECL)
#include <Modloader/app/structs/ColorUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
