#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VitalsHealthProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VitalsHealthProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VitalsHealthProvider_DEFINED)
#include <Modloader/app/structs/VitalsHealthProvider__Fields.h>
#if defined(IL2CPP_STRUCT_VitalsHealthProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_VitalsHealthProvider_DEFINED
struct VitalsHealthProvider__Class;
struct VitalsHealthProvider {
    struct VitalsHealthProvider__Class* klass;
    MonitorData* monitor;
    struct VitalsHealthProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VitalsHealthProvider_FWDDECL)
#define IL2CPP_STRUCT_VitalsHealthProvider_FWDDECL
#include <Modloader/app/structs/VitalsHealthProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_VitalsHealthProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_VitalsHealthProvider_DEFINED) && !defined(IL2CPP_STRUCT_VitalsHealthProvider_FWDDECL)
#include <Modloader/app/structs/VitalsHealthProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VitalsHealthProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
