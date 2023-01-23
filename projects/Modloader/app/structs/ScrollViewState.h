#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScrollViewState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScrollViewState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollViewState_DEFINED)
#include <Modloader/app/structs/ScrollViewState__Fields.h>
#if defined(IL2CPP_STRUCT_ScrollViewState__Fields_DEFINED)
#define IL2CPP_STRUCT_ScrollViewState_DEFINED
struct ScrollViewState__Class;
struct ScrollViewState {
    struct ScrollViewState__Class* klass;
    MonitorData* monitor;
    struct ScrollViewState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScrollViewState_FWDDECL)
#define IL2CPP_STRUCT_ScrollViewState_FWDDECL
#include <Modloader/app/structs/ScrollViewState__Class.h>
#endif
#undef IL2CPP_STRUCT_ScrollViewState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollViewState_DEFINED) && !defined(IL2CPP_STRUCT_ScrollViewState_FWDDECL)
#include <Modloader/app/structs/ScrollViewState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScrollViewState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
