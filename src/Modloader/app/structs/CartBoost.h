#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartBoost_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartBoost_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBoost_DEFINED)
#include <Modloader/app/structs/CartBoost__Fields.h>
#if defined(IL2CPP_STRUCT_CartBoost__Fields_DEFINED)
#define IL2CPP_STRUCT_CartBoost_DEFINED
struct CartBoost__Class;
struct CartBoost {
    struct CartBoost__Class* klass;
    MonitorData* monitor;
    struct CartBoost__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartBoost_FWDDECL)
#define IL2CPP_STRUCT_CartBoost_FWDDECL
#include <Modloader/app/structs/CartBoost__Class.h>
#endif
#undef IL2CPP_STRUCT_CartBoost_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartBoost_DEFINED) && !defined(IL2CPP_STRUCT_CartBoost_FWDDECL)
#include <Modloader/app/structs/CartBoost.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartBoost.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
