#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SplitWritesState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SplitWritesState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplitWritesState_DEFINED)
#include <Modloader/app/structs/SplitWritesState__Fields.h>
#if defined(IL2CPP_STRUCT_SplitWritesState__Fields_DEFINED)
#define IL2CPP_STRUCT_SplitWritesState_DEFINED
struct SplitWritesState__Class;
struct SplitWritesState {
    struct SplitWritesState__Class* klass;
    MonitorData* monitor;
    struct SplitWritesState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SplitWritesState_FWDDECL)
#define IL2CPP_STRUCT_SplitWritesState_FWDDECL
#include <Modloader/app/structs/SplitWritesState__Class.h>
#endif
#undef IL2CPP_STRUCT_SplitWritesState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplitWritesState_DEFINED) && !defined(IL2CPP_STRUCT_SplitWritesState_FWDDECL)
#include <Modloader/app/structs/SplitWritesState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SplitWritesState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
