#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataResolver_DEFINED)
#include <Modloader/app/structs/DynamicDataResolver__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicDataResolver__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicDataResolver_DEFINED
struct DynamicDataResolver__Class;
struct DynamicDataResolver {
    struct DynamicDataResolver__Class* klass;
    MonitorData* monitor;
    struct DynamicDataResolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataResolver_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataResolver_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicDataResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataResolver_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataResolver_FWDDECL)
#include <Modloader/app/structs/DynamicDataResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
