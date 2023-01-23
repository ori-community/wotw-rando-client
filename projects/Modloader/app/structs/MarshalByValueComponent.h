#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MarshalByValueComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MarshalByValueComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalByValueComponent_DEFINED)
#include <Modloader/app/structs/MarshalByValueComponent__Fields.h>
#if defined(IL2CPP_STRUCT_MarshalByValueComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_MarshalByValueComponent_DEFINED
struct MarshalByValueComponent__Class;
struct MarshalByValueComponent {
    struct MarshalByValueComponent__Class* klass;
    MonitorData* monitor;
    struct MarshalByValueComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MarshalByValueComponent_FWDDECL)
#define IL2CPP_STRUCT_MarshalByValueComponent_FWDDECL
#include <Modloader/app/structs/MarshalByValueComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_MarshalByValueComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MarshalByValueComponent_DEFINED) && !defined(IL2CPP_STRUCT_MarshalByValueComponent_FWDDECL)
#include <Modloader/app/structs/MarshalByValueComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MarshalByValueComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
