#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MechSpider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MechSpider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpider_DEFINED)
#include <Modloader/app/structs/MechSpider__Fields.h>
#if defined(IL2CPP_STRUCT_MechSpider__Fields_DEFINED)
#define IL2CPP_STRUCT_MechSpider_DEFINED
struct MechSpider__Class;
struct MechSpider {
    struct MechSpider__Class* klass;
    MonitorData* monitor;
    struct MechSpider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MechSpider_FWDDECL)
#define IL2CPP_STRUCT_MechSpider_FWDDECL
#include <Modloader/app/structs/MechSpider__Class.h>
#endif
#undef IL2CPP_STRUCT_MechSpider_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpider_DEFINED) && !defined(IL2CPP_STRUCT_MechSpider_FWDDECL)
#include <Modloader/app/structs/MechSpider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MechSpider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
