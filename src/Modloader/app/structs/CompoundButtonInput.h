#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompoundButtonInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompoundButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundButtonInput_DEFINED)
#include <Modloader/app/structs/CompoundButtonInput__Fields.h>
#if defined(IL2CPP_STRUCT_CompoundButtonInput__Fields_DEFINED)
#define IL2CPP_STRUCT_CompoundButtonInput_DEFINED
struct CompoundButtonInput__Class;
struct CompoundButtonInput {
    struct CompoundButtonInput__Class* klass;
    MonitorData* monitor;
    struct CompoundButtonInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompoundButtonInput_FWDDECL)
#define IL2CPP_STRUCT_CompoundButtonInput_FWDDECL
#include <Modloader/app/structs/CompoundButtonInput__Class.h>
#endif
#undef IL2CPP_STRUCT_CompoundButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundButtonInput_DEFINED) && !defined(IL2CPP_STRUCT_CompoundButtonInput_FWDDECL)
#include <Modloader/app/structs/CompoundButtonInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompoundButtonInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
