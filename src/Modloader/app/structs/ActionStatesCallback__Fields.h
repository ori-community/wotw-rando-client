#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionStatesCallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionStatesCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionStatesCallback__Fields_DEFINED)
#include <Modloader/app/structs/SwaggerCallback__Fields.h>
#if defined(IL2CPP_STRUCT_SwaggerCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionStatesCallback__Fields_DEFINED
struct List_1_ServerTriggeredActionData_;
struct ActionStatesCallback__Fields {
    struct SwaggerCallback__Fields _;
    struct List_1_ServerTriggeredActionData_* m_actions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionStatesCallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActionStatesCallback__Fields_FWDDECL
#include <Modloader/app/structs/List_1_ServerTriggeredActionData_.h>
#endif
#undef IL2CPP_STRUCT_ActionStatesCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionStatesCallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActionStatesCallback__Fields_FWDDECL)
#include <Modloader/app/structs/ActionStatesCallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionStatesCallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
