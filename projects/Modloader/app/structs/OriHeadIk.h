#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriHeadIk_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriHeadIk_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriHeadIk_DEFINED)
#include <Modloader/app/structs/OriHeadIk__Fields.h>
#if defined(IL2CPP_STRUCT_OriHeadIk__Fields_DEFINED)
#define IL2CPP_STRUCT_OriHeadIk_DEFINED
struct OriHeadIk__Class;
struct OriHeadIk {
    struct OriHeadIk__Class* klass;
    MonitorData* monitor;
    struct OriHeadIk__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriHeadIk_FWDDECL)
#define IL2CPP_STRUCT_OriHeadIk_FWDDECL
#include <Modloader/app/structs/OriHeadIk__Class.h>
#endif
#undef IL2CPP_STRUCT_OriHeadIk_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriHeadIk_DEFINED) && !defined(IL2CPP_STRUCT_OriHeadIk_FWDDECL)
#include <Modloader/app/structs/OriHeadIk.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriHeadIk.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
