#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelectedSaveValidCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelectedSaveValidCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectedSaveValidCondition_DEFINED)
#include <Modloader/app/structs/SelectedSaveValidCondition__Fields.h>
#if defined(IL2CPP_STRUCT_SelectedSaveValidCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_SelectedSaveValidCondition_DEFINED
struct SelectedSaveValidCondition__Class;
struct SelectedSaveValidCondition {
    struct SelectedSaveValidCondition__Class* klass;
    MonitorData* monitor;
    struct SelectedSaveValidCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SelectedSaveValidCondition_FWDDECL)
#define IL2CPP_STRUCT_SelectedSaveValidCondition_FWDDECL
#include <Modloader/app/structs/SelectedSaveValidCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_SelectedSaveValidCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectedSaveValidCondition_DEFINED) && !defined(IL2CPP_STRUCT_SelectedSaveValidCondition_FWDDECL)
#include <Modloader/app/structs/SelectedSaveValidCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelectedSaveValidCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
