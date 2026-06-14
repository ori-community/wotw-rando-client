#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderComponent__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderComponent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderComponent__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberShaderComponent__StaticFields_DEFINED
struct Action_1_UberShaderComponent_;
struct IUberShaderRebindService;
struct UberShaderComponent__StaticFields {
    struct Action_1_UberShaderComponent_* RebindAction;
    bool _UseNewRebinderStack_k__BackingField;
    struct IUberShaderRebindService* RebindingService;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderComponent__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderComponent__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_UberShaderComponent_.h>
#include <Modloader/app/structs/IUberShaderRebindService.h>
#endif
#undef IL2CPP_STRUCT_UberShaderComponent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderComponent__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderComponent__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberShaderComponent__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderComponent__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
