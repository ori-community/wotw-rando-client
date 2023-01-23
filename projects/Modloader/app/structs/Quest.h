#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Quest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Quest_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quest_DEFINED)
#include <Modloader/app/structs/Quest__Fields.h>
#if defined(IL2CPP_STRUCT_Quest__Fields_DEFINED)
#define IL2CPP_STRUCT_Quest_DEFINED
struct Quest__Class;
struct Quest {
    struct Quest__Class* klass;
    MonitorData* monitor;
    struct Quest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Quest_FWDDECL)
#define IL2CPP_STRUCT_Quest_FWDDECL
#include <Modloader/app/structs/Quest__Class.h>
#endif
#undef IL2CPP_STRUCT_Quest_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quest_DEFINED) && !defined(IL2CPP_STRUCT_Quest_FWDDECL)
#include <Modloader/app/structs/Quest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Quest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
