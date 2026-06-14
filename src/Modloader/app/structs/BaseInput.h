#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInput_DEFINED)
#include <Modloader/app/structs/BaseInput__Fields.h>
#if defined(IL2CPP_STRUCT_BaseInput__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseInput_DEFINED
struct BaseInput__Class;
struct BaseInput {
    struct BaseInput__Class* klass;
    MonitorData* monitor;
    struct BaseInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseInput_FWDDECL)
#define IL2CPP_STRUCT_BaseInput_FWDDECL
#include <Modloader/app/structs/BaseInput__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInput_DEFINED) && !defined(IL2CPP_STRUCT_BaseInput_FWDDECL)
#include <Modloader/app/structs/BaseInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
