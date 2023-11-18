#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IndexedState__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IndexedState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexedState__Boxed_DEFINED)
#include <Modloader/app/structs/IndexedState.h>
#if defined(IL2CPP_STRUCT_IndexedState_DEFINED)
#define IL2CPP_STRUCT_IndexedState__Boxed_DEFINED
struct IndexedState__Class;
struct IndexedState__Boxed {
    struct IndexedState__Class* klass;
    MonitorData* monitor;
    struct IndexedState fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IndexedState__Boxed_FWDDECL)
#define IL2CPP_STRUCT_IndexedState__Boxed_FWDDECL
#include <Modloader/app/structs/IndexedState__Class.h>
#endif
#undef IL2CPP_STRUCT_IndexedState__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexedState__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_IndexedState__Boxed_FWDDECL)
#include <Modloader/app/structs/IndexedState__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IndexedState__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
