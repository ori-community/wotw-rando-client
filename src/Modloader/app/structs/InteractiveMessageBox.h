#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractiveMessageBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractiveMessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractiveMessageBox_DEFINED)
#include <Modloader/app/structs/InteractiveMessageBox__Fields.h>
#if defined(IL2CPP_STRUCT_InteractiveMessageBox__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractiveMessageBox_DEFINED
struct InteractiveMessageBox__Class;
struct InteractiveMessageBox {
    struct InteractiveMessageBox__Class* klass;
    MonitorData* monitor;
    struct InteractiveMessageBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractiveMessageBox_FWDDECL)
#define IL2CPP_STRUCT_InteractiveMessageBox_FWDDECL
#include <Modloader/app/structs/InteractiveMessageBox__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractiveMessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractiveMessageBox_DEFINED) && !defined(IL2CPP_STRUCT_InteractiveMessageBox_FWDDECL)
#include <Modloader/app/structs/InteractiveMessageBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractiveMessageBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
