#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteOutTextBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteOutTextBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteOutTextBox_DEFINED)
#include <Modloader/app/structs/WriteOutTextBox__Fields.h>
#if defined(IL2CPP_STRUCT_WriteOutTextBox__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteOutTextBox_DEFINED
struct WriteOutTextBox__Class;
struct WriteOutTextBox {
    struct WriteOutTextBox__Class* klass;
    MonitorData* monitor;
    struct WriteOutTextBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteOutTextBox_FWDDECL)
#define IL2CPP_STRUCT_WriteOutTextBox_FWDDECL
#include <Modloader/app/structs/WriteOutTextBox__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteOutTextBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteOutTextBox_DEFINED) && !defined(IL2CPP_STRUCT_WriteOutTextBox_FWDDECL)
#include <Modloader/app/structs/WriteOutTextBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteOutTextBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
