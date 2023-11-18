#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICloseEx_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICloseEx_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICloseEx_DEFINED)
#define IL2CPP_STRUCT_ICloseEx_DEFINED
struct ICloseEx__Class;
struct ICloseEx {
    struct ICloseEx__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICloseEx_FWDDECL)
#define IL2CPP_STRUCT_ICloseEx_FWDDECL
#include <Modloader/app/structs/ICloseEx__Class.h>
#endif
#undef IL2CPP_STRUCT_ICloseEx_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICloseEx_DEFINED) && !defined(IL2CPP_STRUCT_ICloseEx_FWDDECL)
#include <Modloader/app/structs/ICloseEx.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICloseEx.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
