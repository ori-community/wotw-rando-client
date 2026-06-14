#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataPointIcon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataPointIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataPointIcon_DEFINED)
#define IL2CPP_STRUCT_DataPointIcon_DEFINED
struct DataPointIcon__Class;
struct DataPointIcon {
    struct DataPointIcon__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DataPointIcon_FWDDECL)
#define IL2CPP_STRUCT_DataPointIcon_FWDDECL
#include <Modloader/app/structs/DataPointIcon__Class.h>
#endif
#undef IL2CPP_STRUCT_DataPointIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataPointIcon_DEFINED) && !defined(IL2CPP_STRUCT_DataPointIcon_FWDDECL)
#include <Modloader/app/structs/DataPointIcon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataPointIcon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
