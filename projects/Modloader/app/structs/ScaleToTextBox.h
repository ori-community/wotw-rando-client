#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaleToTextBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaleToTextBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleToTextBox_DEFINED)
#include <Modloader/app/structs/ScaleToTextBox__Fields.h>
#if defined(IL2CPP_STRUCT_ScaleToTextBox__Fields_DEFINED)
#define IL2CPP_STRUCT_ScaleToTextBox_DEFINED
struct ScaleToTextBox__Class;
struct ScaleToTextBox {
    struct ScaleToTextBox__Class* klass;
    MonitorData* monitor;
    struct ScaleToTextBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaleToTextBox_FWDDECL)
#define IL2CPP_STRUCT_ScaleToTextBox_FWDDECL
#include <Modloader/app/structs/ScaleToTextBox__Class.h>
#endif
#undef IL2CPP_STRUCT_ScaleToTextBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleToTextBox_DEFINED) && !defined(IL2CPP_STRUCT_ScaleToTextBox_FWDDECL)
#include <Modloader/app/structs/ScaleToTextBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaleToTextBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
