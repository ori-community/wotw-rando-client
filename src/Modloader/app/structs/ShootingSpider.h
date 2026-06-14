#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootingSpider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootingSpider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpider_DEFINED)
#include <Modloader/app/structs/ShootingSpider__Fields.h>
#if defined(IL2CPP_STRUCT_ShootingSpider__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootingSpider_DEFINED
struct ShootingSpider__Class;
struct ShootingSpider {
    struct ShootingSpider__Class* klass;
    MonitorData* monitor;
    struct ShootingSpider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShootingSpider_FWDDECL)
#define IL2CPP_STRUCT_ShootingSpider_FWDDECL
#include <Modloader/app/structs/ShootingSpider__Class.h>
#endif
#undef IL2CPP_STRUCT_ShootingSpider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpider_DEFINED) && !defined(IL2CPP_STRUCT_ShootingSpider_FWDDECL)
#include <Modloader/app/structs/ShootingSpider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootingSpider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
