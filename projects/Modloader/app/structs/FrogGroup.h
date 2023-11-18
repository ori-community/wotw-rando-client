#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogGroup_DEFINED)
#include <Modloader/app/structs/FrogGroup__Fields.h>
#if defined(IL2CPP_STRUCT_FrogGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_FrogGroup_DEFINED
struct FrogGroup__Class;
struct FrogGroup {
    struct FrogGroup__Class* klass;
    MonitorData* monitor;
    struct FrogGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogGroup_FWDDECL)
#define IL2CPP_STRUCT_FrogGroup_FWDDECL
#include <Modloader/app/structs/FrogGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_FrogGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogGroup_DEFINED) && !defined(IL2CPP_STRUCT_FrogGroup_FWDDECL)
#include <Modloader/app/structs/FrogGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
