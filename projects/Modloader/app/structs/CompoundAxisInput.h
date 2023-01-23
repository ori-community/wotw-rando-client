#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompoundAxisInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompoundAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundAxisInput_DEFINED)
#include <Modloader/app/structs/CompoundAxisInput__Fields.h>
#if defined(IL2CPP_STRUCT_CompoundAxisInput__Fields_DEFINED)
#define IL2CPP_STRUCT_CompoundAxisInput_DEFINED
struct CompoundAxisInput__Class;
struct CompoundAxisInput {
    struct CompoundAxisInput__Class* klass;
    MonitorData* monitor;
    struct CompoundAxisInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompoundAxisInput_FWDDECL)
#define IL2CPP_STRUCT_CompoundAxisInput_FWDDECL
#include <Modloader/app/structs/CompoundAxisInput__Class.h>
#endif
#undef IL2CPP_STRUCT_CompoundAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundAxisInput_DEFINED) && !defined(IL2CPP_STRUCT_CompoundAxisInput_FWDDECL)
#include <Modloader/app/structs/CompoundAxisInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompoundAxisInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
