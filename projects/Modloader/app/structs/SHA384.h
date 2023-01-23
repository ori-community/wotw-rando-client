#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA384_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA384_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA384_DEFINED)
#include <Modloader/app/structs/SHA384__Fields.h>
#if defined(IL2CPP_STRUCT_SHA384__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA384_DEFINED
struct SHA384__Class;
struct SHA384 {
    struct SHA384__Class* klass;
    MonitorData* monitor;
    struct SHA384__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA384_FWDDECL)
#define IL2CPP_STRUCT_SHA384_FWDDECL
#include <Modloader/app/structs/SHA384__Class.h>
#endif
#undef IL2CPP_STRUCT_SHA384_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA384_DEFINED) && !defined(IL2CPP_STRUCT_SHA384_FWDDECL)
#include <Modloader/app/structs/SHA384.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA384.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
