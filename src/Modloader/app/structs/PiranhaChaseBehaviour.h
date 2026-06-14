#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaChaseBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaChaseBehaviour_DEFINED)
#include <Modloader/app/structs/PiranhaChaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PiranhaChaseBehaviour_DEFINED
struct PiranhaChaseBehaviour__Class;
struct PiranhaChaseBehaviour {
    struct PiranhaChaseBehaviour__Class* klass;
    MonitorData* monitor;
    struct PiranhaChaseBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaChaseBehaviour_FWDDECL)
#define IL2CPP_STRUCT_PiranhaChaseBehaviour_FWDDECL
#include <Modloader/app/structs/PiranhaChaseBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_PiranhaChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaChaseBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaChaseBehaviour_FWDDECL)
#include <Modloader/app/structs/PiranhaChaseBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaChaseBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
