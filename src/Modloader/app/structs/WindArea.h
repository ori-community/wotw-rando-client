#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindArea_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindArea_DEFINED)
#include <Modloader/app/structs/WindArea__Fields.h>
#if defined(IL2CPP_STRUCT_WindArea__Fields_DEFINED)
#define IL2CPP_STRUCT_WindArea_DEFINED
struct WindArea__Class;
struct WindArea {
    struct WindArea__Class* klass;
    MonitorData* monitor;
    struct WindArea__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindArea_FWDDECL)
#define IL2CPP_STRUCT_WindArea_FWDDECL
#include <Modloader/app/structs/WindArea__Class.h>
#endif
#undef IL2CPP_STRUCT_WindArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindArea_DEFINED) && !defined(IL2CPP_STRUCT_WindArea_FWDDECL)
#include <Modloader/app/structs/WindArea.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindArea.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
