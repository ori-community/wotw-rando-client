#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InflateBlocks_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InflateBlocks_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateBlocks_DEFINED)
#include <Modloader/app/structs/InflateBlocks__Fields.h>
#if defined(IL2CPP_STRUCT_InflateBlocks__Fields_DEFINED)
#define IL2CPP_STRUCT_InflateBlocks_DEFINED
struct InflateBlocks__Class;
struct InflateBlocks {
    struct InflateBlocks__Class* klass;
    MonitorData* monitor;
    struct InflateBlocks__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InflateBlocks_FWDDECL)
#define IL2CPP_STRUCT_InflateBlocks_FWDDECL
#include <Modloader/app/structs/InflateBlocks__Class.h>
#endif
#undef IL2CPP_STRUCT_InflateBlocks_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateBlocks_DEFINED) && !defined(IL2CPP_STRUCT_InflateBlocks_FWDDECL)
#include <Modloader/app/structs/InflateBlocks.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InflateBlocks.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
