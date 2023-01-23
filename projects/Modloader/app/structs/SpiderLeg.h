#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderLeg_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderLeg_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderLeg_DEFINED)
#include <Modloader/app/structs/SpiderLeg__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderLeg__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderLeg_DEFINED
struct SpiderLeg__Class;
struct SpiderLeg {
    struct SpiderLeg__Class* klass;
    MonitorData* monitor;
    struct SpiderLeg__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderLeg_FWDDECL)
#define IL2CPP_STRUCT_SpiderLeg_FWDDECL
#include <Modloader/app/structs/SpiderLeg__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderLeg_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderLeg_DEFINED) && !defined(IL2CPP_STRUCT_SpiderLeg_FWDDECL)
#include <Modloader/app/structs/SpiderLeg.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderLeg.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
