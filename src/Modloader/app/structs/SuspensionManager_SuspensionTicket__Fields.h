#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_DEFINED)
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_DEFINED
struct __declspec(align(8)) SuspensionManager_SuspensionTicket__Fields {
    int32_t ID;
    SuspendableMask__Enum Mask_1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_FWDDECL)
#define IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_FWDDECL)
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
