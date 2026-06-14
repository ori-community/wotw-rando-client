#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IButtonInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_IButtonInput_DEFINED)
#define IL2CPP_STRUCT_IButtonInput_DEFINED
struct IButtonInput__Class;
struct IButtonInput {
    struct IButtonInput__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IButtonInput_FWDDECL)
#define IL2CPP_STRUCT_IButtonInput_FWDDECL
#include <Modloader/app/structs/IButtonInput__Class.h>
#endif
#undef IL2CPP_STRUCT_IButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_IButtonInput_DEFINED) && !defined(IL2CPP_STRUCT_IButtonInput_FWDDECL)
#include <Modloader/app/structs/IButtonInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IButtonInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
