#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPostProcess__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPostProcess__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcess__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberPostProcess__StaticFields_DEFINED
struct List_1_UberPostProcess_;
struct UberPostProcess;
struct UberPostProcess__StaticFields {
    bool _DebugOverrideEnabled_k__BackingField;
    bool _DebugOverrideInitialValuesSet_k__BackingField;
    struct List_1_UberPostProcess_* s_subCams;
    struct UberPostProcess* s_instance;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPostProcess__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberPostProcess__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_UberPostProcess_.h>
#include <Modloader/app/structs/UberPostProcess.h>
#endif
#undef IL2CPP_STRUCT_UberPostProcess__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPostProcess__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberPostProcess__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberPostProcess__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPostProcess__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
