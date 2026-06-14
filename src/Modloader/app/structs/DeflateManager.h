#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateManager_DEFINED)
#include <Modloader/app/structs/DeflateManager__Fields.h>
#if defined(IL2CPP_STRUCT_DeflateManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DeflateManager_DEFINED
struct DeflateManager__Class;
struct DeflateManager {
    struct DeflateManager__Class* klass;
    MonitorData* monitor;
    struct DeflateManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflateManager_FWDDECL)
#define IL2CPP_STRUCT_DeflateManager_FWDDECL
#include <Modloader/app/structs/DeflateManager__Class.h>
#endif
#undef IL2CPP_STRUCT_DeflateManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateManager_DEFINED) && !defined(IL2CPP_STRUCT_DeflateManager_FWDDECL)
#include <Modloader/app/structs/DeflateManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
