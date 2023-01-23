#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWorldState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWorldState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWorldState_DEFINED)
#include <Modloader/app/structs/SeinWorldState__Fields.h>
#if defined(IL2CPP_STRUCT_SeinWorldState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWorldState_DEFINED
struct SeinWorldState__Class;
struct SeinWorldState {
    struct SeinWorldState__Class* klass;
    MonitorData* monitor;
    struct SeinWorldState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWorldState_FWDDECL)
#define IL2CPP_STRUCT_SeinWorldState_FWDDECL
#include <Modloader/app/structs/SeinWorldState__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinWorldState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWorldState_DEFINED) && !defined(IL2CPP_STRUCT_SeinWorldState_FWDDECL)
#include <Modloader/app/structs/SeinWorldState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWorldState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
