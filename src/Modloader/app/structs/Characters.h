#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Characters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Characters_INITIALIZING
#if !defined(IL2CPP_STRUCT_Characters_DEFINED)
#define IL2CPP_STRUCT_Characters_DEFINED
struct Characters__Class;
struct Characters {
    struct Characters__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Characters_FWDDECL)
#define IL2CPP_STRUCT_Characters_FWDDECL
#include <Modloader/app/structs/Characters__Class.h>
#endif
#undef IL2CPP_STRUCT_Characters_INITIALIZING
#if !defined(IL2CPP_STRUCT_Characters_DEFINED) && !defined(IL2CPP_STRUCT_Characters_FWDDECL)
#include <Modloader/app/structs/Characters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Characters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
