#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerActionSetHandle_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerActionSetHandle_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerActionSetHandle_t_DEFINED)
#define IL2CPP_STRUCT_ControllerActionSetHandle_t_DEFINED
struct ControllerActionSetHandle_t {
    uint64_t m_ControllerActionSetHandle;
};
#endif
#if !defined(IL2CPP_STRUCT_ControllerActionSetHandle_t_FWDDECL)
#define IL2CPP_STRUCT_ControllerActionSetHandle_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_ControllerActionSetHandle_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerActionSetHandle_t_DEFINED) && !defined(IL2CPP_STRUCT_ControllerActionSetHandle_t_FWDDECL)
#include <Modloader/app/structs/ControllerActionSetHandle_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerActionSetHandle_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
