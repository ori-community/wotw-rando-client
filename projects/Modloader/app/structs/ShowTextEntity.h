#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowTextEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowTextEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTextEntity_DEFINED)
#include <Modloader/app/structs/ShowTextEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ShowTextEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowTextEntity_DEFINED
struct ShowTextEntity__Class;
struct ShowTextEntity {
    struct ShowTextEntity__Class* klass;
    MonitorData* monitor;
    struct ShowTextEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowTextEntity_FWDDECL)
#define IL2CPP_STRUCT_ShowTextEntity_FWDDECL
#include <Modloader/app/structs/ShowTextEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowTextEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTextEntity_DEFINED) && !defined(IL2CPP_STRUCT_ShowTextEntity_FWDDECL)
#include <Modloader/app/structs/ShowTextEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowTextEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
