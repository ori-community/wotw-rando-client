#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowTextBoxes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowTextBoxes_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTextBoxes_DEFINED)
#include <Modloader/app/structs/ShowTextBoxes__Fields.h>
#if defined(IL2CPP_STRUCT_ShowTextBoxes__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowTextBoxes_DEFINED
struct ShowTextBoxes__Class;
struct ShowTextBoxes {
    struct ShowTextBoxes__Class* klass;
    MonitorData* monitor;
    struct ShowTextBoxes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowTextBoxes_FWDDECL)
#define IL2CPP_STRUCT_ShowTextBoxes_FWDDECL
#include <Modloader/app/structs/ShowTextBoxes__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowTextBoxes_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTextBoxes_DEFINED) && !defined(IL2CPP_STRUCT_ShowTextBoxes_FWDDECL)
#include <Modloader/app/structs/ShowTextBoxes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowTextBoxes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
