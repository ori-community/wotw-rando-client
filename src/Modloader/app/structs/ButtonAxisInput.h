#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ButtonAxisInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ButtonAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonAxisInput_DEFINED)
#include <Modloader/app/structs/ButtonAxisInput__Fields.h>
#if defined(IL2CPP_STRUCT_ButtonAxisInput__Fields_DEFINED)
#define IL2CPP_STRUCT_ButtonAxisInput_DEFINED
struct ButtonAxisInput__Class;
struct ButtonAxisInput {
    struct ButtonAxisInput__Class* klass;
    MonitorData* monitor;
    struct ButtonAxisInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ButtonAxisInput_FWDDECL)
#define IL2CPP_STRUCT_ButtonAxisInput_FWDDECL
#include <Modloader/app/structs/ButtonAxisInput__Class.h>
#endif
#undef IL2CPP_STRUCT_ButtonAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonAxisInput_DEFINED) && !defined(IL2CPP_STRUCT_ButtonAxisInput_FWDDECL)
#include <Modloader/app/structs/ButtonAxisInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ButtonAxisInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
