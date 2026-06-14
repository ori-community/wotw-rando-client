#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AllowedEntityArea_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AllowedEntityArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllowedEntityArea_DEFINED)
#include <Modloader/app/structs/AllowedEntityArea__Fields.h>
#if defined(IL2CPP_STRUCT_AllowedEntityArea__Fields_DEFINED)
#define IL2CPP_STRUCT_AllowedEntityArea_DEFINED
struct AllowedEntityArea__Class;
struct AllowedEntityArea {
    struct AllowedEntityArea__Class* klass;
    MonitorData* monitor;
    struct AllowedEntityArea__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AllowedEntityArea_FWDDECL)
#define IL2CPP_STRUCT_AllowedEntityArea_FWDDECL
#include <Modloader/app/structs/AllowedEntityArea__Class.h>
#endif
#undef IL2CPP_STRUCT_AllowedEntityArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_AllowedEntityArea_DEFINED) && !defined(IL2CPP_STRUCT_AllowedEntityArea_FWDDECL)
#include <Modloader/app/structs/AllowedEntityArea.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AllowedEntityArea.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
