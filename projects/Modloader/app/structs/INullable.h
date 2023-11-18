#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INullable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INullable_INITIALIZING
#if !defined(IL2CPP_STRUCT_INullable_DEFINED)
#define IL2CPP_STRUCT_INullable_DEFINED
struct INullable__Class;
struct INullable {
    struct INullable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INullable_FWDDECL)
#define IL2CPP_STRUCT_INullable_FWDDECL
#include <Modloader/app/structs/INullable__Class.h>
#endif
#undef IL2CPP_STRUCT_INullable_INITIALIZING
#if !defined(IL2CPP_STRUCT_INullable_DEFINED) && !defined(IL2CPP_STRUCT_INullable_FWDDECL)
#include <Modloader/app/structs/INullable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INullable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
