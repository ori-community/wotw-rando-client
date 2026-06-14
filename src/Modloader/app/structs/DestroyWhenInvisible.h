#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyWhenInvisible_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyWhenInvisible_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyWhenInvisible_DEFINED)
#include <Modloader/app/structs/DestroyWhenInvisible__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyWhenInvisible__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyWhenInvisible_DEFINED
struct DestroyWhenInvisible__Class;
struct DestroyWhenInvisible {
    struct DestroyWhenInvisible__Class* klass;
    MonitorData* monitor;
    struct DestroyWhenInvisible__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyWhenInvisible_FWDDECL)
#define IL2CPP_STRUCT_DestroyWhenInvisible_FWDDECL
#include <Modloader/app/structs/DestroyWhenInvisible__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyWhenInvisible_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyWhenInvisible_DEFINED) && !defined(IL2CPP_STRUCT_DestroyWhenInvisible_FWDDECL)
#include <Modloader/app/structs/DestroyWhenInvisible.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyWhenInvisible.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
