#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonType_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonType_DEFINED)
#define IL2CPP_STRUCT_IMoonType_DEFINED
struct IMoonType__Class;
struct IMoonType {
    struct IMoonType__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonType_FWDDECL)
#define IL2CPP_STRUCT_IMoonType_FWDDECL
#include <Modloader/app/structs/IMoonType__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonType_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonType_DEFINED) && !defined(IL2CPP_STRUCT_IMoonType_FWDDECL)
#include <Modloader/app/structs/IMoonType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
