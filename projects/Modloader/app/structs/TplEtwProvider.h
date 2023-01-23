#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TplEtwProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TplEtwProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TplEtwProvider_DEFINED)
#include <Modloader/app/structs/TplEtwProvider__Fields.h>
#if defined(IL2CPP_STRUCT_TplEtwProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TplEtwProvider_DEFINED
struct TplEtwProvider__Class;
struct TplEtwProvider {
    struct TplEtwProvider__Class* klass;
    MonitorData* monitor;
    struct TplEtwProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TplEtwProvider_FWDDECL)
#define IL2CPP_STRUCT_TplEtwProvider_FWDDECL
#include <Modloader/app/structs/TplEtwProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_TplEtwProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TplEtwProvider_DEFINED) && !defined(IL2CPP_STRUCT_TplEtwProvider_FWDDECL)
#include <Modloader/app/structs/TplEtwProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TplEtwProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
