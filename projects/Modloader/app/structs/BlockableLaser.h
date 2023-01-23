#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockableLaser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockableLaser_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockableLaser_DEFINED)
#include <Modloader/app/structs/BlockableLaser__Fields.h>
#if defined(IL2CPP_STRUCT_BlockableLaser__Fields_DEFINED)
#define IL2CPP_STRUCT_BlockableLaser_DEFINED
struct BlockableLaser__Class;
struct BlockableLaser {
    struct BlockableLaser__Class* klass;
    MonitorData* monitor;
    struct BlockableLaser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlockableLaser_FWDDECL)
#define IL2CPP_STRUCT_BlockableLaser_FWDDECL
#include <Modloader/app/structs/BlockableLaser__Class.h>
#endif
#undef IL2CPP_STRUCT_BlockableLaser_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockableLaser_DEFINED) && !defined(IL2CPP_STRUCT_BlockableLaser_FWDDECL)
#include <Modloader/app/structs/BlockableLaser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockableLaser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
