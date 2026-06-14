#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PurchaseThingScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PurchaseThingScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseThingScreen_DEFINED)
#include <Modloader/app/structs/PurchaseThingScreen__Fields.h>
#if defined(IL2CPP_STRUCT_PurchaseThingScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_PurchaseThingScreen_DEFINED
struct PurchaseThingScreen__Class;
struct PurchaseThingScreen {
    struct PurchaseThingScreen__Class* klass;
    MonitorData* monitor;
    struct PurchaseThingScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PurchaseThingScreen_FWDDECL)
#define IL2CPP_STRUCT_PurchaseThingScreen_FWDDECL
#include <Modloader/app/structs/PurchaseThingScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_PurchaseThingScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseThingScreen_DEFINED) && !defined(IL2CPP_STRUCT_PurchaseThingScreen_FWDDECL)
#include <Modloader/app/structs/PurchaseThingScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PurchaseThingScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
