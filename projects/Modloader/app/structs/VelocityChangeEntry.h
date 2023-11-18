#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VelocityChangeEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VelocityChangeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityChangeEntry_DEFINED)
#include <Modloader/app/structs/VelocityChangeEntry__Fields.h>
#if defined(IL2CPP_STRUCT_VelocityChangeEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_VelocityChangeEntry_DEFINED
struct VelocityChangeEntry__Class;
struct VelocityChangeEntry {
    struct VelocityChangeEntry__Class* klass;
    MonitorData* monitor;
    struct VelocityChangeEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VelocityChangeEntry_FWDDECL)
#define IL2CPP_STRUCT_VelocityChangeEntry_FWDDECL
#include <Modloader/app/structs/VelocityChangeEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_VelocityChangeEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_VelocityChangeEntry_DEFINED) && !defined(IL2CPP_STRUCT_VelocityChangeEntry_FWDDECL)
#include <Modloader/app/structs/VelocityChangeEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VelocityChangeEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
