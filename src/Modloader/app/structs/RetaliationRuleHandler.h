#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RetaliationRuleHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RetaliationRuleHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetaliationRuleHandler_DEFINED)
#include <Modloader/app/structs/RetaliationRuleHandler__Fields.h>
#if defined(IL2CPP_STRUCT_RetaliationRuleHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_RetaliationRuleHandler_DEFINED
struct RetaliationRuleHandler__Class;
struct RetaliationRuleHandler {
    struct RetaliationRuleHandler__Class* klass;
    MonitorData* monitor;
    struct RetaliationRuleHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RetaliationRuleHandler_FWDDECL)
#define IL2CPP_STRUCT_RetaliationRuleHandler_FWDDECL
#include <Modloader/app/structs/RetaliationRuleHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_RetaliationRuleHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RetaliationRuleHandler_DEFINED) && !defined(IL2CPP_STRUCT_RetaliationRuleHandler_FWDDECL)
#include <Modloader/app/structs/RetaliationRuleHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RetaliationRuleHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
