#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Coroutine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Coroutine_INITIALIZING
#if !defined(IL2CPP_STRUCT_Coroutine_DEFINED)
#include <Modloader/app/structs/Coroutine__Fields.h>
#if defined(IL2CPP_STRUCT_Coroutine__Fields_DEFINED)
#define IL2CPP_STRUCT_Coroutine_DEFINED
struct Coroutine__Class;
struct Coroutine {
    struct Coroutine__Class* klass;
    MonitorData* monitor;
    struct Coroutine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Coroutine_FWDDECL)
#define IL2CPP_STRUCT_Coroutine_FWDDECL
#include <Modloader/app/structs/Coroutine__Class.h>
#endif
#undef IL2CPP_STRUCT_Coroutine_INITIALIZING
#if !defined(IL2CPP_STRUCT_Coroutine_DEFINED) && !defined(IL2CPP_STRUCT_Coroutine_FWDDECL)
#include <Modloader/app/structs/Coroutine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Coroutine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
