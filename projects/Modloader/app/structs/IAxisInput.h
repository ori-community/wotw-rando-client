#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAxisInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAxisInput_DEFINED)
#define IL2CPP_STRUCT_IAxisInput_DEFINED
struct IAxisInput__Class;
struct IAxisInput {
    struct IAxisInput__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAxisInput_FWDDECL)
#define IL2CPP_STRUCT_IAxisInput_FWDDECL
#include <Modloader/app/structs/IAxisInput__Class.h>
#endif
#undef IL2CPP_STRUCT_IAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAxisInput_DEFINED) && !defined(IL2CPP_STRUCT_IAxisInput_FWDDECL)
#include <Modloader/app/structs/IAxisInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAxisInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
