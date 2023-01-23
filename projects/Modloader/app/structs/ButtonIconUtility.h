#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ButtonIconUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ButtonIconUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonIconUtility_DEFINED)
#define IL2CPP_STRUCT_ButtonIconUtility_DEFINED
struct ButtonIconUtility__Class;
struct ButtonIconUtility {
    struct ButtonIconUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ButtonIconUtility_FWDDECL)
#define IL2CPP_STRUCT_ButtonIconUtility_FWDDECL
#include <Modloader/app/structs/ButtonIconUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_ButtonIconUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_ButtonIconUtility_DEFINED) && !defined(IL2CPP_STRUCT_ButtonIconUtility_FWDDECL)
#include <Modloader/app/structs/ButtonIconUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ButtonIconUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
