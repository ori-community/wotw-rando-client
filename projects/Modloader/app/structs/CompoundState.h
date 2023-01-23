#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompoundState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompoundState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundState_DEFINED)
#include <Modloader/app/structs/CompoundState__Fields.h>
#if defined(IL2CPP_STRUCT_CompoundState__Fields_DEFINED)
#define IL2CPP_STRUCT_CompoundState_DEFINED
struct CompoundState__Class;
struct CompoundState {
    struct CompoundState__Class* klass;
    MonitorData* monitor;
    struct CompoundState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompoundState_FWDDECL)
#define IL2CPP_STRUCT_CompoundState_FWDDECL
#include <Modloader/app/structs/CompoundState__Class.h>
#endif
#undef IL2CPP_STRUCT_CompoundState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundState_DEFINED) && !defined(IL2CPP_STRUCT_CompoundState_FWDDECL)
#include <Modloader/app/structs/CompoundState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompoundState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
