#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothSeekBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothSeekBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothSeekBehaviour_DEFINED)
#include <Modloader/app/structs/MothSeekBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MothSeekBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MothSeekBehaviour_DEFINED
struct MothSeekBehaviour__Class;
struct MothSeekBehaviour {
    struct MothSeekBehaviour__Class* klass;
    MonitorData* monitor;
    struct MothSeekBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MothSeekBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MothSeekBehaviour_FWDDECL
#include <Modloader/app/structs/MothSeekBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MothSeekBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothSeekBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MothSeekBehaviour_FWDDECL)
#include <Modloader/app/structs/MothSeekBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothSeekBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
