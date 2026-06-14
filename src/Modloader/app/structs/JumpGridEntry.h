#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpGridEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpGridEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpGridEntry_DEFINED)
#include <Modloader/app/structs/JumpGridEntry__Fields.h>
#if defined(IL2CPP_STRUCT_JumpGridEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_JumpGridEntry_DEFINED
struct JumpGridEntry__Class;
struct JumpGridEntry {
    struct JumpGridEntry__Class* klass;
    MonitorData* monitor;
    struct JumpGridEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpGridEntry_FWDDECL)
#define IL2CPP_STRUCT_JumpGridEntry_FWDDECL
#include <Modloader/app/structs/JumpGridEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_JumpGridEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpGridEntry_DEFINED) && !defined(IL2CPP_STRUCT_JumpGridEntry_FWDDECL)
#include <Modloader/app/structs/JumpGridEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpGridEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
