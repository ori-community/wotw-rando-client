#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboDataEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboDataEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboDataEntry_DEFINED)
#include <Modloader/app/structs/ComboDataEntry__Fields.h>
#if defined(IL2CPP_STRUCT_ComboDataEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_ComboDataEntry_DEFINED
struct ComboDataEntry__Class;
struct ComboDataEntry {
    struct ComboDataEntry__Class* klass;
    MonitorData* monitor;
    struct ComboDataEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComboDataEntry_FWDDECL)
#define IL2CPP_STRUCT_ComboDataEntry_FWDDECL
#include <Modloader/app/structs/ComboDataEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_ComboDataEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboDataEntry_DEFINED) && !defined(IL2CPP_STRUCT_ComboDataEntry_FWDDECL)
#include <Modloader/app/structs/ComboDataEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboDataEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
