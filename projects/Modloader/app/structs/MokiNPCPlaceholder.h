#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MokiNPCPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MokiNPCPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MokiNPCPlaceholder_DEFINED)
#include <Modloader/app/structs/MokiNPCPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_MokiNPCPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_MokiNPCPlaceholder_DEFINED
struct MokiNPCPlaceholder__Class;
struct MokiNPCPlaceholder {
    struct MokiNPCPlaceholder__Class* klass;
    MonitorData* monitor;
    struct MokiNPCPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MokiNPCPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_MokiNPCPlaceholder_FWDDECL
#include <Modloader/app/structs/MokiNPCPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_MokiNPCPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MokiNPCPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_MokiNPCPlaceholder_FWDDECL)
#include <Modloader/app/structs/MokiNPCPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MokiNPCPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
