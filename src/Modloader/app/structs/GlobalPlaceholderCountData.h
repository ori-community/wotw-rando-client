#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalPlaceholderCountData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalPlaceholderCountData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalPlaceholderCountData_DEFINED)
#include <Modloader/app/structs/GlobalPlaceholderCountData__Fields.h>
#if defined(IL2CPP_STRUCT_GlobalPlaceholderCountData__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalPlaceholderCountData_DEFINED
struct GlobalPlaceholderCountData__Class;
struct GlobalPlaceholderCountData {
    struct GlobalPlaceholderCountData__Class* klass;
    MonitorData* monitor;
    struct GlobalPlaceholderCountData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalPlaceholderCountData_FWDDECL)
#define IL2CPP_STRUCT_GlobalPlaceholderCountData_FWDDECL
#include <Modloader/app/structs/GlobalPlaceholderCountData__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalPlaceholderCountData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalPlaceholderCountData_DEFINED) && !defined(IL2CPP_STRUCT_GlobalPlaceholderCountData_FWDDECL)
#include <Modloader/app/structs/GlobalPlaceholderCountData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalPlaceholderCountData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
