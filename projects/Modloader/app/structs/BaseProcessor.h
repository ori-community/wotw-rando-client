#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseProcessor_DEFINED)
#include <Modloader/app/structs/BaseProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_BaseProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseProcessor_DEFINED
struct BaseProcessor__Class;
struct BaseProcessor {
    struct BaseProcessor__Class* klass;
    MonitorData* monitor;
    struct BaseProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseProcessor_FWDDECL)
#define IL2CPP_STRUCT_BaseProcessor_FWDDECL
#include <Modloader/app/structs/BaseProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseProcessor_DEFINED) && !defined(IL2CPP_STRUCT_BaseProcessor_FWDDECL)
#include <Modloader/app/structs/BaseProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
