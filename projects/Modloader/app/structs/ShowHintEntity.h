#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowHintEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowHintEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHintEntity_DEFINED)
#include <Modloader/app/structs/ShowHintEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ShowHintEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowHintEntity_DEFINED
struct ShowHintEntity__Class;
struct ShowHintEntity {
    struct ShowHintEntity__Class* klass;
    MonitorData* monitor;
    struct ShowHintEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowHintEntity_FWDDECL)
#define IL2CPP_STRUCT_ShowHintEntity_FWDDECL
#include <Modloader/app/structs/ShowHintEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowHintEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHintEntity_DEFINED) && !defined(IL2CPP_STRUCT_ShowHintEntity_FWDDECL)
#include <Modloader/app/structs/ShowHintEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowHintEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
