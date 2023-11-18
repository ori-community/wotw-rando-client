#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlockN_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlockN_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockN_DEFINED)
#include <Modloader/app/structs/BlockN__Fields.h>
#if defined(IL2CPP_STRUCT_BlockN__Fields_DEFINED)
#define IL2CPP_STRUCT_BlockN_DEFINED
struct BlockN__Class;
struct BlockN {
    struct BlockN__Class* klass;
    MonitorData* monitor;
    struct BlockN__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlockN_FWDDECL)
#define IL2CPP_STRUCT_BlockN_FWDDECL
#include <Modloader/app/structs/BlockN__Class.h>
#endif
#undef IL2CPP_STRUCT_BlockN_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlockN_DEFINED) && !defined(IL2CPP_STRUCT_BlockN_FWDDECL)
#include <Modloader/app/structs/BlockN.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlockN.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
