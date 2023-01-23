#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifierDataModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifierDataModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierDataModel_DEFINED)
#include <Modloader/app/structs/ModifierDataModel__Fields.h>
#if defined(IL2CPP_STRUCT_ModifierDataModel__Fields_DEFINED)
#define IL2CPP_STRUCT_ModifierDataModel_DEFINED
struct ModifierDataModel__Class;
struct ModifierDataModel {
    struct ModifierDataModel__Class* klass;
    MonitorData* monitor;
    struct ModifierDataModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModifierDataModel_FWDDECL)
#define IL2CPP_STRUCT_ModifierDataModel_FWDDECL
#include <Modloader/app/structs/ModifierDataModel__Class.h>
#endif
#undef IL2CPP_STRUCT_ModifierDataModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierDataModel_DEFINED) && !defined(IL2CPP_STRUCT_ModifierDataModel_FWDDECL)
#include <Modloader/app/structs/ModifierDataModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifierDataModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
